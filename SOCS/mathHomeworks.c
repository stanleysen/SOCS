#include <stdio.h>
int main(){
	long long int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
	char add,subs,multiply;
	
	long long int f1,f2,f3;
	f1 = ((num1+num2)*(num3-num4));
	f2 = ((num5+num6)*(num7-num8));
	f3 = ((num9+num10)*(num11-num12));
	
	scanf("(%lld%c%lld)%c(%lld%c%lld)",&num1,&add,&num2,&multiply,&num3,&subs,&num4);
	scanf("(%lld%c%lld)%c(%lld%c%lld)",&num5,&add,&num6,&multiply,&num7,&subs,&num8);
	scanf("(%lld%c%lld)%c(%lld%c%lld)",&num9,&add,&num10,&multiply,&num11,&subs,&num12);
	
	printf("%lld %lld %lld\n",f1,f2,f3);
	
	
	return 0;
}
