#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	
	int n; char word[1001];
	scanf("%d", &n);
	
	int numbering = 1;
	while (n > 0){
		scanf("%s", word);
		
        int j;
        for(j = 0; j < strlen(word); j++){
            if(isupper(word[j])){
                word[j] = tolower(word[j]);
            } else if(islower(word[j])){
                word[j] = toupper(word[j]);
            }
        }
		int i;
		printf("Case #%d: ", numbering);
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
