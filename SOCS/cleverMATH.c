#include <stdio.h>
#include <string.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n); getchar();

    while (n--){
        long int a, b;
        long int sum = 0;
        long int ans = 0;
        long int multi = 1;
        scanf("%ld %ld",&a,&b); getchar();

        int i;
        while(a || b){
        sum = (a % 10) + (b % 10);
        sum = sum % 10;

        ans = (sum * multi) + ans;
        a /= 10; b /= 10;
        multi *= 10;
        }


        printf("Case #%d: %d\n", numbering, ans);
    numbering++;
    }


}