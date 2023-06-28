#include <stdio.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while(n--){
        int total = 0;
        scanf("%d",&total); getchar();

        int count = 1;
        int array[total];

        int a, b;

            int i;
            for(i = 0; i < total; i++){
                scanf("%d", &array[i]); getchar();
            }

            int j;
            int prev = array[0];
            for(j = 0; j < total; j++){
                if(array[j] != prev){
                    count++;
                }
                prev = array[j];
            }

        
         
        printf("Case #%d: %d\n", numbering, count); 
    numbering++;

    }
}