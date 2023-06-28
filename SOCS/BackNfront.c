#include <stdio.h>
#include <string.h>
int main (){

int n = 3;
char word[101];

    while (n > 0){
        int t;
            scanf("%d %s",&t, word); getchar();
            int length = strlen(word);

        printf("%c%c\n", word[length-1], word[0]);
    n--;
    }

}