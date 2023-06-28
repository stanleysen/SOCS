#include <stdio.h>
int main (){
	
	long long int total_case;
	scanf("%lld", &total_case);
	long long int case1;
	long long int sum = 0;
	// declare num1
	
	long long int count = 0;
	long long int nomor = 1;
	int i;
	for(i = 0; i < total_case; i++){
		scanf("%lld", &case1);
		
		int num1[case1];
		int j;
		for(j = 0; j < case1; j++){
			scanf("%lld", &num1[j]);
			sum += num1[j];
		}
		
		int k;
		for(k = 0; k < case1; k++){
			if(num1[k] > sum){
				count++;
			} 
		}
		
		if(sum >= case1){
			printf("Case #%lld: %lld\n",nomor,sum);
			printf("%lld\n", count);
		} else if (sum <= case1){
			printf("Case #%lld: %lld\n",nomor,sum);
			printf("%lld\n", count);
		}
		nomor++;
		sum = 0;
		count = 0;
	}
	
}
