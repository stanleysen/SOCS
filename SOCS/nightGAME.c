#include <stdio.h>
int main (){
	
	int n;
	scanf("%d", &n);
	
	int numbering = 1;
	while(n > 0){
		long long int total;
		scanf("%lld", &total);
		
		long long int num[total];
		
		int i;
		for(i = 0; i < total; i++){
			scanf("%lld", &num[i]);
		}
		
		printf("Case #%d: ", numbering);
		numbering++;
		
		int j;
		for(j = total-1; j >= 0; j--){
			if(j > 0){
				printf("%lld ", num[j]);
			} else if(j == 0){
				printf("%lld\n", num[j]);
			}
		}	
		n--;
	}	
}
