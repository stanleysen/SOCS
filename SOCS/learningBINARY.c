#include <stdio.h>
int main (){

    int t = 3;
    scanf("%d",&t);
    
        while (t){
            long long int a, b;
            scanf("%lld %lld",&a, &b);

            // if((1 << b ) & a){
            //     printf("1\n");
            // } else {
            //     printf("0\n");
            // }
            printf("%d\n", (1 << b ) & a);
            t--;
        }
}