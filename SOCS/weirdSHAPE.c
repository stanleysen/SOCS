#include <stdio.h>
int main (){
	
	int t, n;              /* i = 1 buat baris awal
	scanf("%d", &t);      j = 1 buat kolom awal                                            */
	                      
	while(t > 0){ 
		scanf("%d", &n);   
		// n = input
		int i, j;
		for(i = 1; i <=n; i++){
			for(j = 1; j <= n; j++){
				if(i == 1 || i == n || j == n || i == j || j == 1 || i + j == n + 1){
					printf("*");
				} else {
					printf(" ");
				}
			} // i == j sama j == 1
			printf("\n");
		}
		printf("\n");
		t--;
	}
}
