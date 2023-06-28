#include <stdio.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);
    
    while (n--){
        //harga cashback jmlh_cashback_maksimum
        long long int a, b, c;
        scanf("%lld %lld %lld",&a, &b, &c); getchar();

        long long int disc = (a/100) * b;
        long long int total = 0;

        if(disc >= c){
            total = c;
        } else if(disc <= c){
            total = disc;
        }

        printf("Case #%d: %lld\n", numbering, total);
        numbering++;

    }

}