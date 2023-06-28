#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n); getchar();
    long long int median = n / 2;

    struct data {
        char ID [101];
        char item[101];
        long long int price;
};

    struct data allData[n];

    long long int i;
    for (i = 0; i < n; i++){
        scanf("%[^\n]",&allData[i].ID); getchar();
        scanf("%[^\n]",allData[i].item); getchar();
        scanf("%lld",&allData[i].price); getchar();
      } 
    
   
    long long int j;
    for(j = 0; j < n; j++){
        if(allData[j].price >= allData[median].price){
        printf("%s ",allData[j].ID); printf("%s\n", allData[j].item);
        }
    }
}