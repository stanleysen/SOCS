#include <stdio.h>
#include <algorithm>

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

        std::sort(array, array + total);

        int j;
        for(j = 1; j < total; j++){
            if(array[j] != array[j-1]){
                count++;
            }
        }
         
        printf("Case #%d: %d\n", numbering, count); 
    numbering++;
    }
}