#include <stdio.h>
#include <ctype.h>
int main (){

    int n, t;
    char word[201];
    scanf("%d %d",&n, &t); getchar();

        scanf("%s", word); getchar();
        int changes;
        int i = 0;
        for(i = 0; i < t; i++){
            scanf("%d",&changes);
            if(isupper(word[changes])){
                word[changes] = tolower(word[changes]);
            } else if(islower(word[changes])){
                word[changes] = toupper(word[changes]);
            }
        }

        printf("%s\n", word);
    
}