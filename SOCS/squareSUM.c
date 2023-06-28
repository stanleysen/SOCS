#include <stdio.h>
int main (){
	
	double num1 ,num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;
	scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
		scanf("%lf %lf %lf %lf", &num5, &num6, &num7, &num8);
			scanf("%lf %lf %lf %lf", &num9, &num10, &num11, &num12);
			
//	num1 = a
//	num2 = b
//	num3 = c
//	num4 = d

	double jmlh_total1 = ((num1/1)+(num1/1)+(num2/2*4)+(num3/3*6)+(num4/4*4));
	double jmlh_total2 = ((num5/1)+(num5/1)+(num6/2*4)+(num7/3*6)+(num8/4*4));
	double jmlh_total3 = ((num9/1)+(num9/1)+(num10/2*4)+(num11/3*6)+(num12/4*4));
	
	printf("%.2lf\n%.2lf\n%.2lf\n", jmlh_total1, jmlh_total2,jmlh_total3);
	
	
	
}
