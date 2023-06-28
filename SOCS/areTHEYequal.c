#include <stdio.h>
int main (){
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
	getchar();
	
	long long int left_o = a*b;
	long long int right_o = c-d;
	
	if(left_o == right_o){
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	
	
}
