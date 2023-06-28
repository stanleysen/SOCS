#include <stdio.h>
int main (){

    long long int n, numbering = 1;
    scanf("%lld",&n);

    while(n > 0){
        int T;
        scanf("%d",&T);

        int array[T];
        int frequency;

        int i;
        for(i = 0; i < T; i++){
            scanf("%d",&array[i]);
        }

        int j, k;
        long int max = 0;
        for(j = 0; j < T; j++){
            frequency = 1;
            for(k = j+1; k < T; k++){
                if(array[j] == array[k]){
                    frequency++;
                }
            }
            if(frequency > max){
                max = frequency;
            }
        }

        printf("Case #%lld: %d\n", numbering,max);
        
        // reset frequency buat cari nilai plg kecil
        int m, l;
        long int value = 1000000000;
        for(m = 0; m < T; m++){
        frequency = 1;
            for(l = m+1; l < T; l++){
                if(array[m] == array[l]){
                    frequency++;
                }
            }
            if(frequency == max && array[m] < value){
                value = array[m];
            }
        }
        printf("%ld\n", value);
        numbering++;
        n--;
    }

}