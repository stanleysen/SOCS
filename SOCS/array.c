#include <stdio.h>
int main (){
	int total_num;
	scanf("%d", &total_num);
	
	int num1[total_num];
	int num2[total_num];
	
	int i;
	for(i = 0; i < total_num; i++){
		scanf("%d", &num1[i]);
		getchar();
	}
	
	int j;
	for(j = 0; j < total_num; j++){
		scanf("%d", &num2[num1[j]]);
		getchar();
	}
	
	int k;
	for(k = 0; k < total_num; k++){
		if(k < (total_num -1)){
			printf("%d ", num2[k]);
		} else if(k == (total_num-1)) {
			printf("%d\n", num2[k]);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
