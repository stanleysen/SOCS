#include <stdio.h>
int main (){
	
	int line, column;
	scanf("%d %d", &line, &column);
	
	int array [line][column];
	
	int i;
	for(i = 0; i < line; i++){
		int j;
		for(j = 0; j < column; j++){
			scanf("%d", &array [i][j]);
			getchar();
		}
	}	
	int tChanges;
	scanf("%d", &tChanges);
	getchar();
	
	int k;
	int a, b, c;
	for(k = 0; k < tChanges; k++){
		scanf("%d %d %d", &a, &b, &c);
		getchar();
		array [a-1][b-1] = c;
	}
	
	int l;
	for(l = 0; l < line; l++){
		int m;
		for(m = 0; m < column; m++){
			if(m < (column-1)){
			    printf("%d ", array[l][m]);
			} else if (m == (column-1)){
				printf("%d\n", array[l][m]);
				
			}
		}
	}
}
