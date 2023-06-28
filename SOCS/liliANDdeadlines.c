#include <stdio.h>
#include <string.h>
int main(){
	long long int n, num[101], temp_num = 0; 
	char lec[101][20], temp[20];
	
	scanf("%lld", &n);

	long long int ii;
	for (ii = 0; ii < n; ii++){
		scanf(" %s %lld", lec[ii], &num[ii]);
	}
	long long int i, j;
	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-1; j++){
			if (strcmp(lec[j], lec[j+1]) > 0){
				strcpy(temp, lec[j]); temp_num = num[j];
				strcpy(lec[j], lec[j+1]); num[j] = num[j+1];
				strcpy(lec[j+1], temp); num[j+1] = temp_num;		
			}
		}
	}

	long long int l, m;
	for (l = 0; l < n-1; l++){
		for (m = 0; m < n-1; m++){
			if (num[m] > num[m+1]){
				temp_num = num[m]; strcpy(temp, lec[m]);
				num[m] = num[m+1]; strcpy(lec[m], lec[m+1]);
				num[m+1] = temp_num; strcpy(lec[m+1], temp);
			}
		}
	}

	long long int o;
	for (o = 0; o < n; o++){
		printf("%s\n", lec[o]);
	}
	
}