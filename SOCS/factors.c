#include <stdio.h>
#include <math.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while (n){
        long int t;
        scanf("%ld",&t);

        int i;
        int count = 0;
        int max = sqrt(t);
        for(i = 1; i <= max; i++){
            if(t % i == 0){
                if(t / i == i){
                    count++;
                } else {
                    count += 2;
                }
            }
        }
        printf("Case #%d: %d\n",numbering, count);

        numbering++;
        n--;
    }

}