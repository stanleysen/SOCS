#include <stdio.h>
int main (){
	
	int n, numbering = 1;
	scanf("%d", &n); getchar();
	
// https://forms.office.com/r/
	
	while(n > 0){
		
		long long int total, num1;
	    long long int sum = 0, sum1 = 0;
			
		scanf("%lld", &total); getchar();
		
		int i;
		for(i = 0; i < total; i++){
			scanf("%lld", &num1); getchar();
			sum += num1;
		}
			
		printf("Case #%d: %lld\n",numbering, sum);
		numbering ++;
		n--;	
	}	
}
