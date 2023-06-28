#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nim[101];
    char name[100];
    char nim2[101];
}data;

int main (){

    int n, t, x, s = 0;

    FILE *fp = fopen("testdata.in", "r");
    
    fscanf(fp, "%d\n", &n);

    data allData[101];

    int i, j;
    for(i = 0; i < n; i++){
        fscanf(fp, "%s %s\n", &allData[i].nim, &allData[i].name);
    }
    fscanf(fp, "%d\n", &x);

    for(j = 0; j < x; j++){
        fscanf(fp, "%s\n", &allData[j].nim2);
    }
    
    int count = 1;
    for(i = 0; i < x; i++){ 
    int check = 0;
        for(j = 0; j < n; j++){ 
            if(strcmp(allData[i].nim2, allData[j].nim) == 0){
                printf("Case #%d: %s\n", count, allData[j].name);
                check++;
                count++;
            }
        } if(check == 0){
            printf("Case #%d: N/A\n", count);
            count++;
        } 
    }
}