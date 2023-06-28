#include <stdio.h>
int main (){
	long long int num1,num2;
	long long int sum = 0;
	scanf("%d %d", &num1, &num2);
	
	int i;
	for(i = num1; i <= num2; i++){
		sum += i;
	}
	printf("%lld\n", sum);
}
