#include <stdio.h>

int count = 1;
int fibo (int n){
    if(n == 0 || n == 1){
        return n;
    } else {
        count += 2;
        return (fibo(n-1) + fibo(n-2));
    }
}

int main (){

    int t ,numbering = 1;
    scanf("%d",&t); getchar();

    while(t--){
        int input_fibo;
        scanf("%d",&input_fibo); getchar();
        fibo(input_fibo);
        printf("Case #%d: %d\n", numbering, count);
        numbering++;
        count = 1;

    }

}