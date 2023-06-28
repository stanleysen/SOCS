#include <stdio.h>
int main (){
	
	// kotak pertama pake # dengan ukuran N x N
	// kotak kedua pake . dan untuk tiap baris K pake #
	// kotak ketiga pake . dan untuk tiap kolom k pake #
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	    //===========================
		// kotak pertama
		int j, i;
		for(j = 0; j < n; j++){
			for(i = 0; i < n; i++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
		
		//===========================
		//kotak kedua 
		int l,m;
		for(l = 1; l <= n; l++){
			for(m = 1; m <= n; m++){
				if(l % k == 0){
					printf("#");
				} else { 
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
		
		//===========================
		//kotak ketiga
		int o, p;
		for(o = 1; o <= n; o++){
			for(p = 1; p <= n; p++){
				if(p % k == 0){
					printf("#");
				} else {
					printf(".");
				}
			}
			printf("\n");
		}	
}
