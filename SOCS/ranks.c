#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
	char name[15];
	int value;
};

void swap(struct data *a, struct data *b){
	struct data temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	int i;
	for (i = 0; i < t; i++){
		int n, j, k;
		scanf("%d", &n); getchar();

		struct data allData[n];

		for (j = 0; j < n; j++){ // input name sm value
			scanf("%[^#]#%d", &allData[j].name, &allData[j].value); getchar();
		}

		for (j = 0; j < n-1; j++){ // sort name
			for (k = 0; k < n-1; k++){
				if (strcmp(allData[k].name, allData[k+1].name) > 0){
					swap(&allData[k], &allData[k+1]);
				}
			}
		}
		for (j = 0; j < n-1; j++){ // sort value
			for (k = 0; k < n-1; k++){
				if (allData[k].value < allData[k+1].value){
					swap(&allData[k], &allData[k+1]);
				}
			}
		}
		char target[15];
		scanf("%s", target);
		
		int result = -1;
		for(j = 0; j < n; j++){
			if(strcmp(target, allData[j].name) == 0){
				result = j;
				break;
			}
		}
		if (result != -1){
			printf("Case #%d: %d\n", i+1, result+1);
		}else{
			break;
		}
	}
	
	return 0;
}
