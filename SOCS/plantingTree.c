#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[101];
    char tree[100];
    char name2[101];
}data;

int main (){

    int n, t, x = 0, s = 0;

    FILE *fp = fopen("testdata.in", "r");
    
    fscanf(fp, "%d", &n);

    data allData[101];

    while(!feof(fp)){
        if(x < n){
            fscanf(fp, "%d", &n);
            fscanf(fp, "%[^#]#%[^\n]\n", &allData[x].name, &allData[x].tree);
            x++;
        } else if(x == n){
            fscanf(fp, "%d", &t);
            fscanf(fp, "%s\n", &allData[s].name2);
            s++;
        }
    }

// printf("%d = t",t );s
// printf("%s %s = nama awal\n", allData[0].name, allData[0].name2);

    int i, j;
    int count = 1;
    for(i = 0; i < s; i++){ // nama temen
    int check = 0;
        for(j = 0; j < x; j++){ // data
            if(strcmp(allData[j].name, allData[i].name2) == 0){
                printf("Case #%d: %s\n", count, allData[j].tree);
                check++;
                count++;
            }
        } if(check == 0){
            printf("Case #%d: N/A\n", count);
            count++;
        } 
    }
}