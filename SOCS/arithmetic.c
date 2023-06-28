#include <stdio.h>
int main (){
	
	int num1, num2;
	int add, subs, multi, div, mod;
	scanf("%d %d", &num1, &num2);
	
	add = num1 + num2;
	subs = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	
	printf("%d\n%d\n%d\n%d\n%d\n", add, subs, multi, div, mod);
	
	
}
