#include <stdio.h>
int main (){
	
	int n;
	scanf("%d", &n);
	
	// * = GENAP
	// # = GANJIL
	
	int i;
	int triangle;
	for(i = 0; i < n; i++){
		scanf("%d", &triangle);
		
		printf("Case #%d:\n", i+1);
		int j;
		for(j = 1; j <= triangle; j++){
			int k;
			for(k = triangle; k > j; k--){
				printf(" ");
			}
			int l;
			for(l = 1; l <= j ; l++){
				if(l == 1){
					if((triangle + 1) % 2 == 0){ // ganjil
						printf("*");
					} else { // genap
						printf("#");
					}
				} else{ // ganjil
					if((triangle + 1) % 2 == 0){
						if(l % 2 == 0){
							printf("#");
						} else {
							printf("*");
						}
					} else { // genap
					if(l % 2 == 0){
					    printf("*");
			     	} else {
					    printf("#");
			    	}
						
					}
								
				}					
		   }
		   	printf("\n");		    	
	    }
   }
}
