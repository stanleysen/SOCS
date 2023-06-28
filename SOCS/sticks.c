#include <stdio.h>
#include <math.h>
int main (){

    int n, count = 1;
    scanf("%d",&n);

    while(n--){
        int N,M,O;
        scanf("%d %d %d",&N, &M, &O); getchar();
        // a = N, b = M, c = O
        printf("Case #%d: ",count);
        
        if(N + M > O && N + O > M && M + O > N){
            printf("Yes\n");
        } else {
            printf("No\n");
        }




    count++;   
    }

}