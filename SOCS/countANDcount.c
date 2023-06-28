#include <stdio.h>
int main (){

    int n, numbering = 1;
    int i, num2 = 1;
    scanf("%d",&n);

        while(n--){
            int num;
            num2 = 1;
            int test = 1;
            scanf("%d",&num); getchar();

            printf("Case #%d:\n", numbering);
            for(i = 1; i <= num; i++){
                if(i >= 15 && i % 15 == 0){
                    printf("%d Lili\n", num2);
                    num2++;
                } else if(i % 3 == 0 || i % 5 == 0){
                    printf("%d Jojo\n", num2);
                    num2++;
                } else {
                    printf("%d Lili\n", num2);
                    num2++;
                }
            }
        numbering++;
        }

}