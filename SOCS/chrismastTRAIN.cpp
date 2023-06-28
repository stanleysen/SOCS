#include <stdio.h>

int main(){

    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        int a, b;
        int count = 0;
        scanf("%d %d", &a, &b);

        int array[a];
        for (int n = 0; n < a; n++)
        {
            scanf("%d", &array[n]);
        }

        for (int j = 0; j < a - 1; j++){
            for (int k = 0; k < a - 1 - j; k++){
                if (array[k] > array[k + 1]){
                    int temp = array[k];
                    array[k] = array[k + 1];
                    array[k + 1] = temp;
                    count++;
                }
            }
        }

        printf("Case #%d: %d\n", i + 1, count * b);
    }
}