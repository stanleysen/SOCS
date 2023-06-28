#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while(n--){

        char name[100001];
        scanf("%s",name);

        int count = 1;

        sort(name, name + strlen(name));

        int i; 
        for(i = 1; i < strlen(name); i++){
            if(name[i] != name[i-1])
            count++;
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