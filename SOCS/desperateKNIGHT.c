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
                           min(countSteps(x1, y1, tx, ty),
                           countSteps(x2, y2, tx, ty)) + 1;
                            
           
            chess[abs(y - ty)][abs(x - tx)] =
                           chess[abs(x - tx)][abs(y - ty)];
            return chess[abs(x - tx)][abs(y - ty)];
        }
    }
}
int convertKnight(char a){
	int kx;
	if(a == 'A'){
		kx = 1;
	}else if(a == 'B'){
		kx = 2;
	}else if(a == 'C'){
		kx = 3;
	}else if(a == 'D'){
		kx = 4;
	}else if(a == 'E'){
		kx = 5;
	}else if(a == 'F'){
		kx = 6;
	}else if(a == 'G'){
		kx = 7;
	}else if(a = 'H'){
		kx = 8;
	}
	return kx;
}
int convertTarget(char b){
	int ktx;
	if(b == 'A'){
		ktx = 1;
	}else if(b == 'B'){
		ktx = 2;
	}else if(b == 'C'){
		ktx = 3;
	}else if(b == 'D'){
		ktx = 4;
	}else if(b == 'E'){
		ktx = 5;
	}else if(b == 'F'){
		ktx = 6;
	}else if(b == 'G'){
		ktx = 7;
	}else if(b = 'H'){
		ktx = 8;
	}	
	return ktx;
}

int main(){
	int n = 0;
	scanf("%d",&n);getchar();
	
	int loop;
	for(loop = 0; loop < n ; loop++){
		
    int i, n, kx, ky, ktx, kty, ans;
     
    
    n = 100;
     
   
   	char posK;
   	char posT;
   	scanf("%c%d %c%d",&posK,&ky,&posT,&kty);getchar();
   	posK = toupper(posK);
   	kx = convertKnight(posK);
   	posT = toupper(posT);
   	ktx = convertTarget(posT);
 
    
    if ((kx == 1 && ky == 1 && ktx == 2 && kty == 2) ||
        (kx == 2 && ky == 2 && ktx == 1 && kty == 1))
            ans = 4;
    else if ((kx == 1 && ky == n && ktx == 2 && kty == n - 1) ||
             (kx == 2 && ky == n - 1 && ktx == 1 && kty == n))
                ans = 4;
    else if ((kx == n && ky == 1 && ktx == n - 1 && kty == 2) ||
             (kx == n - 1 && ky == 2 && ktx == n && kty == 1))
                ans = 4;
    else if ((kx == n && ky == n && ktx == n - 1 && kty == n - 1) ||
             (kx == n - 1 && ky == n - 1 && ktx == n && kty == n))
                ans = 4;
    else {
        
        chess[1][0] = 3;
        chess[0][1] = 3;
        chess[1][1] = 2;
        chess[2][0] = 2;
        chess[0][2] = 2;
        chess[2][1] = 1;
        chess[1][2] = 1;
 
        ans = countSteps(kx, ky, ktx, kty);
    }
 
    printf("Case #%d: %d\n",loop+1,ans);
 
	}

}
