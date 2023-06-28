#include <stdio.h>
int main (){
	
	long int n;
	scanf("%ld", &n);
	
	int numbering = 1;
	while(n--){
		int t;
		long long int sum = 0;
		
		scanf("%d", &t);
		
		long long int test[t][t];
		
		int i, j;
		for(i = 0; i < t; i++){
			for(j = 0; j < t; j++){
				scanf("%lld", &test[i][j]);
			}
		}
		
		printf("Case #%d: ", numbering);
		int k, l;
		for(k = 0; k < t; k++){  // baris                // 00 10 20 30 40
			for(l = 0; l < t; l ++){  // kolom
			    sum += test[l][k];
			}
			if(k < t-1)
			printf("%lld ", sum);
			if(k == t-1) printf("%lld\n", sum);
			sum = 0;
		}
		n--;
		numbering++;
	}	
}
