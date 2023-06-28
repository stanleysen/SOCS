#include <stdio.h>
#include <string.h>
int main (){
	
	int n; char word [1005];
	scanf("%d", &n); getchar();
	
	int numbering = 1;
	while(n > 0){
	
		scanf("%s", word); getchar();
		
		printf("Case %d: ", numbering);
		
		int i;
		for(i = 0; i < strlen(word); i++){
			if(i < strlen(word) - 1){
				printf("%d-", word[i]);
			} else if(i ==  strlen(word) - 1){
				printf("%d\n", word[i]);
			}
		}		
		n--;
		numbering++;
	}
	return 0;
}
