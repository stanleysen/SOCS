#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
// vector 
int main (){
	int number = 1;
	int total_case, total_case2;
	scanf("%d", &total_case);
	
	
	int i;
	for(i = 0; i < total_case; i++){
		scanf("%d", &total_case2);
		getchar();
		
		vector <int> case1(total_case2);
		int j;
		for(j = 0; j < total_case2; j++){
			scanf("%d", &case1(j));
			getchar();
		}
		//sorting
		int k;
		int l;
		int maks = 0;
		for(k = 0; k < total_case2; k++){
			if(case1[k] > maks){
				maks = case1[k];
			}
		}
		
		
		
//		printf("Case #%d: %d\n",number, (case1[0] + case1[1]));
		number++;
	
	}
}
