#include <stdio.h>
int main (){
	
	int n;
	scanf("%d", &n);
	int number = 1;
	
	while (n > 0){
		int a, b;
		
		
		scanf("%d %d", &a, &b);
		
		printf("Case #%d: ", number);
		
		if(a != b){
			if(a > b){
			printf("Go-Jo\n");	
			} else if(b > a){
				printf("Bi-Pay\n");
			}
		}
		number++;
		n--;
	}	 	 
}
