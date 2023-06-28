#include <stdio.h>
int main (){
	
	int n;
	scanf("%d", &n); getchar();
	
	int numbering = 1;
	
	while(n > 0){
		
		int total;
		scanf("%d", &total); getchar();
		
		int item1[total];
		int item2[total];
		
		int i;
		for(i = 0; i < total; i++){
			scanf("%d", &item1[i]); getchar();
		}
		
		int j;
		for(j = 0; j < total; j++){
			scanf("%d", &item2[j]); getchar();
		}
		
		printf("Case #%d: ", numbering);
		int k;
		for(k = 0; k < total; k++){
			if(k < (total-1)){
				if(item1[k] >= item2[k]){
					printf("%d ", item1[k] - item2[k]);
				} else if (item2[k] > item1[k]){
					printf("%d ", (item2[k] - item1[k])*-1);
				}
			} else if (k == (total-1)){
				if(item1[k] >= item2[k]){
					printf("%d\n", item1[k] - item2[k]);
				} else if(item2[k] > item1[k]){
					printf("%d\n", (item2[k] - item1[k])*-1);
				}
			}
		}		
		numbering++;
		n--;	
	}	
}
