#include <stdio.h>
int main (){


    int n, i, easy = 0, hard = 0;
    scanf("%d", &n); getchar();

    int array[n];
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]); getchar();
        if(array[i] == 1){
            hard++;
        } else {
            easy++;
        }
    }

if(hard >= 1){
    printf("not easy\n");
} else {
    printf("easy\n");
}


















}