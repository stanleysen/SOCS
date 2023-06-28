#include <stdio.h>

int repeat (int n, int o){
    if (n == o){
        return n;
    } else if (n == 1){
        return n;
    } else if(n % 2 == 0){
        n /= 2;
        return repeat(n, o);
    } else if (n % 2 == 1){
        n = (n * 3) + 1;
        return repeat(n, o);
    }
}

int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while(n--){
        long int a, b;
        scanf("%ld %ld",&a, &b);
        // printf("%d", repeat(a, b));

        printf("Case #%d: ", numbering);

        if(repeat(a, b) == b){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        numbering++;
    }
}