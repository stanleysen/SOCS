#include <stdio.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    struct data {
        char code[101];
        char day[101];
        int time;
    };

    struct data Alldata[n];

    int i;
    for (i = 0; i < n; i++){
        scanf("%s",&Alldata[i].code);
        scanf("%s",&Alldata[i].day);
        scanf("%d",&Alldata[i].time);
    }

    int t;
    scanf("%d",&t);
    int j;
    int order;
    for (j = 0; j < t; j++){
        scanf("%d",&order);
        printf("Query #%d:\n", numbering);
        printf("Code: %s\n", Alldata[order-1].code);
        printf("Day: %s\n", Alldata[order-1].day);
        if(Alldata[order-1].time <= 9){
            printf("Time: 0%d:00\n", Alldata[order-1].time);
        } else {
            printf("Time: %d:00\n", Alldata[order-1].time);
        }
    numbering++;
    }
    

}