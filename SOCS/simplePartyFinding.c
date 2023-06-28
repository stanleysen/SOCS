#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main (){

    int n, i;
    scanf("%d",&n); getchar();

    for(i = 0; i < n; i++){
        int j, t, k, ans = 0;
        scanf("%d", &t); getchar();

        int array[t];

        for(j = 0; j < t; j++){ 
            scanf("%d", &array[j]); getchar();
        }

        //sort ascending
        for(j = 0; j < t-1; j++){
            for(k = 0; k < t-1; k++){
                if(array[k] > array[k+1]){
                    swap(&array[k], &array[k+1]);
                }
            }
        }

        scanf("%d", &ans); getchar();
        int result = -1;
        for(j = 0; j < t; j++){
            if(array[j] == ans){
                result = j;
            }
        }

        if(result != -1){
            if(result != t-1){
                printf("CASE #%d: %d %d\n", i+1, array[result], array[result+1]);
            } else if(result == t-1){
                printf("CASE #%d: %d %d\n", i+1, array[result-1], array[result]);
            }
        } else {
            printf("CASE #%d: %d %d\n", i+1, -1, -1);
        }
    }
}