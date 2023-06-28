#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int chess[8][8] = {0};
int countSteps(int x, int y,int tx, int ty){
    if (x == tx && y == ty)
        return chess[0][0];
    else {
        if (chess[abs(x - tx)][abs(y - ty)] != 0)
            return chess[abs(x - tx)][abs(y - ty)];
        else {
            int x1, y1, x2, y2;
             
            if (x <= tx) {
                if (y <= ty) {
                    x1 = x + 2;
                    y1 = y + 1;
                    x2 = x + 1;
                    y2 = y + 2;
                } else {
                    x1 = x + 2;
                    y1 = y - 1;
                    x2 = x + 1;
                    y2 = y - 2;
                }
            } else {
                if (y <= ty) {
                    x1 = x - 2;
                    y1 = y + 1;
                    x2 = x - 1;
                    y2 = y + 2;
                } else {
                    x1 = x - 2;
                    y1 = y - 1;
                    x2 = x - 1;
                    y2 = y - 2;
                }
            }
             

            chess[abs(x - tx)][abs(y - ty)] =
                           std::min(countSteps(x1, y1, tx, ty),
                           countSteps(x2, y2, tx, ty)) + 1;
                            
           
            chess[abs(y - ty)][abs(x - tx)] =
                           chess[abs(x - tx)][abs(y - ty)];
            return chess[abs(x - tx)][abs(y - ty)];
        }
    }
}
int target(char b){
	int txx;
	if(b == 'A'){
		txx = 1;
	}else if(b == 'B'){
		txx = 2;
	}else if(b == 'C'){
		txx = 3;
	}else if(b == 'D'){
		txx = 4;
	}else if(b == 'E'){
		txx = 5;
	}else if(b == 'F'){
		txx = 6;
	}else if(b == 'G'){
		txx = 7;
	}else if(b = 'H'){
		txx = 8;
	}	
	return txx;
}
int start(char a){
	int xx;
	if(a == 'A'){
		xx = 1;
	}else if(a == 'B'){
		xx = 2;
	}else if(a == 'C'){
		xx = 3;
	}else if(a == 'D'){
		xx = 4;
	}else if(a == 'E'){
		xx = 5;
	}else if(a == 'F'){
		xx = 6;
	}else if(a == 'G'){
		xx = 7;
	}else if(a = 'H'){
		xx = 8;
	}
	return xx;
}

int main(){
	int n = 0;
	scanf("%d",&n);getchar();
	
	int i;
	for(i = 0; i < n ; i++){
		
    int n, xx, yy, txx, tyy, result;
        n = 100;
   
   	char posK;
   	char posT;
   	scanf("%c%d %c%d",&posK,&yy,&posT,&tyy);getchar();
   	posK = toupper(posK);
   	xx = start(posK);
   	posT = toupper(posT);
   	txx = target(posT);
 
    
    if ((xx == 1 && yy == 1 && txx == 2 && tyy == 2) ||
        (xx == 2 && yy == 2 && txx == 1 && tyy == 1))
            result = 4;
    else if ((xx == 1 && yy == n && txx == 2 && tyy == n - 1) ||
             (xx == 2 && yy == n - 1 && txx == 1 && tyy == n))
                result = 4;
    else if ((xx == n && yy == 1 && txx == n - 1 && tyy == 2) ||
             (xx == n - 1 && yy == 2 && txx == n && tyy == 1))
                result = 4;
    else if ((xx == n && yy == n && txx == n - 1 && tyy == n - 1) ||
             (xx == n - 1 && yy == n - 1 && txx == n && tyy == n))
                result = 4;
    else {
        
        chess[1][0] = 3;
        chess[0][1] = 3;
        chess[1][1] = 2;
        chess[2][0] = 2;
        chess[0][2] = 2;
        chess[2][1] = 1;
        chess[1][2] = 1;
 
        result = countSteps(xx, yy, txx, tyy);
    }
 
    printf("Case #%d: %d\n", i+1, result);
 
	}

}
