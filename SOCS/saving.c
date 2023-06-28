#include <stdio.h>
#include <math.h>
int main (){
	double CI, formula1, formula2, num;
	scanf("%lf %lf", &num, &CI);
	
	formula1= (1 + (CI/100));
	formula2 = (num * pow(formula1,3));
	
	printf("%.2lf\n", formula2);
	
}
