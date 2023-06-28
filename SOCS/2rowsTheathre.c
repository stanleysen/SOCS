#include <stdio.h>

void swap(long long int *a, long long int *b) {
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

int main (){

    long long int n, numbering = 1;
    scanf("%d",&n);
        while(n--){
            long long int input, temp = 0;
            scanf("%lld",&input); getchar();

            long long int array[input];

            int i, j;
            for(i = 0; i < input; i++){
                scanf("%lld",&array[i]); getchar();
            }

            for(i = 0; i < input; i++){
                for(j = i + 1; j < input; j++){
                    if(array[i] > array[j]){
                        swap(&array[i], &array[j]);
                    }
                }
            }

            for(i = 0; i < (input / 2) - 1; i++){
                if(temp < array[i+1] - array[i]){
                    temp = array[i+1] - array[i];
                }
               
            }

            for(i = input / 2; i < input-1; i++){
               if(temp < array[i+1] - array[i]){
                   temp = array[i+1] - array[i];
               }
                
            }

            printf("Case #%d: %d\n", numbering, temp);
            numbering++;
            

        }
}