#include <stdio.h>

int main (){

    int f1, f2, temp = 0;
    scanf("%d %d",&f1, &f2); getchar();

    int limit;
    scanf("%d", &limit); getchar();

    int i;
    for(i = 1; i < limit; i++){
            temp = f1 + f2;
            f1 = f2;
            f2 = temp;
    }
    printf("%d\n", temp);

}