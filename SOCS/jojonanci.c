#include <stdio.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

        while(n--){
            int fn , f0, f1, temp;
            scanf("%d %d %d", &fn, &f0, &f1);

            int i;
            if(fn == 0){
                temp = f0;
            } else if (fn == 1){
                temp = f1;
            } else {
                for(i = 2; i <= fn; i++){
                    temp = f1 - f0;
                    f0 = f1;
                    f1 = temp;
                }
            }

            printf("Case #%d: %d\n", numbering, temp);
            numbering++;

        }


}