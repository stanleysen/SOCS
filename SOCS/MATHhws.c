#include <stdio.h>
int main(){
	long long int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
	long long int fa,fb,fc;
	char add,subs,multiply;
	
	scanf("(%lld%c%lld)%c(%lld%c%lld)",&num1,&add,&num2,&multiply,&num3,&subs,&num4);
	getchar();
	scanf("(%lld%c%lld)%c(%lld%c%lld)",&num5,&add,&num6,&multiply,&num7,&subs,&num8);
	getchar();
	scanf("(%lld%c%lld)%c(%lld%c%lld)",&num9,&add,&num10,&multiply,&num11,&subs,&num12);
	getchar();
	
	fa = ((num1+num2)*(num3-num4));
	fb = ((num5+num6)*(num7-num8));
	fc = ((num9+num10)*(num11-num12));
	
	printf("%lld %lld %lld\n",fa,fb,fc);
	
	return 0;
}
