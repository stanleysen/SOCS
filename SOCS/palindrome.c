#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (){
	// 1 = true
	
	char word[501];
	int testcase;
	scanf("%d", &testcase); getchar();
	
	int numbering = 1;
	while(testcase > 0){
		bool check = 1;
		scanf("%s", word); getchar();
		
		int i;
		for(i = 0; i < strlen(word)-1; i++){
			if(word[i] != word[strlen(word)-i-1]){
				check = 0;
				break;
			}
		}	
		printf("Case #%d: ", numbering);
		if(check == 0){
			printf("Nah, it's not a palindrome\n");
		} else if(check == 1){
			printf("Yay, it's a palindrome\n");
		}
		testcase--;
		numbering++;
	}
}
