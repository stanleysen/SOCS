#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int views[n];
	
	int i;	
	for(i = 0; i < n; i++){
		scanf("%d", &views[i]);
	}
	
	int friends, day1, day2;
	int sum = 0;
	int nomor = 1;
	scanf("%d", &friends);
	
	while(friends > 0){
		scanf("%d %d", &day1, &day2);
		
		int j;
		for(j = day1-1; j <= day2-1; j++){
		    sum += views[j];
			}
			printf("Case #%d: %d\n",nomor,sum);
			nomor++;
			sum = 0;
			friends--;
	}
}
