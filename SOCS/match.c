#include <stdio.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while(n--){
        int amount = 0;
        int p, q;
        scanf("%d",&amount); getchar();
        int array[amount];

        int i;
        for(i = 0; i < amount; i++){
            scanf("%d",&array[i]); getchar();
        }
        scanf("%d %d", &p, &q); getchar();

        printf("Case #%d : ", numbering);
        if(array[p-1] > array[q-1]){
            printf("Bibi\n");
        } else if(array[p-1] < array[q-1]){
            printf("Lili\n");
        } else if(array[p-1] == array[q-1]){
            printf("Draw\n");
        }
        numbering++;
    }


}