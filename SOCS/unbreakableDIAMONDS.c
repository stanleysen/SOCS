#include <stdio.h>
#include <string.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while(n--){

        char name[100001];
        scanf("%s",name);

        int i;
        int count = 0;
        int alphabet[27] = {0};
        for(i = 0; i < strlen(name); i++){
            alphabet[name[i] - 'a'] = 1;
        }

        int j;
        for(j = 0; j < 27; j++){
            count += alphabet[j];
        }
        // printf("%d", count);
        if(count % 2 != 0){
            printf("Case #%d: Unbreakable\n", numbering);
        } else {
            printf("Case #%d: Breakable\n", numbering);
        }

        numbering++;
    }







}