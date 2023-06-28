#include <stdio.h>
#include <string.h>
int main (){

    int n, numbering = 1;
    char word[1001];
    scanf("%d",&n);

        while (n){
            scanf("%s", word); getchar();

            int i = 0;
            int length = strlen(word);
        printf("Case %d: ", numbering);
            for (i = length-1; i >= 0; i--){
                if(i > 0){
                    printf("%d", (word[i] % 2));
                } else if(i == 0){
                    printf("%d\n", (word[i] % 2));
                }
            }
            numbering++;
            n--;
        }
}