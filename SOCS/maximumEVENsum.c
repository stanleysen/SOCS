#include <stdio.h>
int main (){

    int n;
    scanf("%d",&n); getchar();

    int i;
    int array[n];
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]); getchar();
    }
   
    int j;
    int sum = 0, odd = 0, count1 = 0, count2 = 0, even = 0;
    int temp1 = 0, temp2 = 0;
    // odd ganjil, even = genap
    for(j = n-1; j >= 0; j--){
        if((array[j]) % 2 == 0){ // genap
            count1++; 
            temp1 += array[j];
            if(count1 % 2 == 0){
                even = temp1;
            }
        } else {
            count2++;
            temp2 += array[j]; // ganjil
            if(count2 % 2 == 0){
                odd = temp2;
            }
        }
    }
    printf("%d\n", even + odd);
    

 







}