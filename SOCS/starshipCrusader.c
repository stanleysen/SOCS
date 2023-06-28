#include <stdio.h>
int main (){

    int T, numbering = 1;
    scanf("%d",&T); getchar();

    while(T > 0){
        long int n;
        scanf("%ld",&n); getchar();

        int i;
        long int array[n*2];
        for(i = 0; i < n*2; i++){
            scanf("%ld",&array[i]); getchar();
        }

        int j;
        int count = 0;
        for(j = 0; j < n; j++){
            if(array[j+n] > array[j]){
                count++;
            }
        }

        printf("Case #%d: %d\n", numbering, count);
    numbering++;
    T--;
    }







}