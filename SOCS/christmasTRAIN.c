#include <stdio.h>
#include <stdlib.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n); getchar();
        while(n--){
            int a, b, temp = 0;
            int count = 0;
            scanf("%d %d",&a,&b); getchar();

            int array[a];

            int i;
            for(i = 0; i < a; i++){
                scanf("%d",&array[i]); getchar();
            }

            int j, k;
            for(j = 0; j < a-1; j++){
                for(k = 0; k < a-1; k++){
                    if(array[k] > array[k+1]){
                        temp = array[k];
                        array[k] = array[k+1];
                        array[k+1] = temp;
                            count++;
                    }
                }
            }

            printf("Case #%d: %d\n", numbering, count * b);
            numbering++;
        }
}