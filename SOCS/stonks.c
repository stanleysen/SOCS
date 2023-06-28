#include <stdio.h>
int main (){

    int n;
    scanf("%d",&n); getchar();

        long long int i;
        long long int t;
        long long int sum = 0;
        for(i = 0; i < n; i++){
            scanf("%lld",&t); getchar();
            if(t > 0){
                sum += t;
            }
        }
        printf("%lld\n", sum);

}