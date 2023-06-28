#include <stdio.h>
int main (){
	
	int n, triangle;
	scanf("%d", &n);
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &triangle);
		// ==========================================
		
		//===========================================
		int j;
		for(j = 1; j <= triangle; j++){			
			int k;
			for(k = triangle; k > j ; k--){
				printf(" ");
			}			
			int l;
			for(l = 1; l <= j; l++){
				printf("*");
			}
			printf("\n");			
		}
		
		
	}	
}
