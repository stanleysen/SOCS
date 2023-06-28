#include <stdio.h>
#include <string.h>
int main (){
	
	int n; char word[1001];
	scanf("%d", &n);
	
	int numbering = 1;
	while (n > 0){
		scanf("%s", word);
		
		int i;
		printf("Case #%d : ", numbering);
		for(i = strlen(word) - 1; i >= 0; i--){
			if(i > 0){
				printf("%c", word[i]);
			} else if(i == 0 ){
				printf("%c\n", word[i]);
			}
		}
		n--;
		numbering++;
	}
	
}
