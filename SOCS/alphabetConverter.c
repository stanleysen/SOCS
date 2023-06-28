#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
    char name[110];
};

struct data2 {
    char first;
    char end;
    int count;
};

void swap(struct data2 *a, struct data2 *b){
    struct data2 temp = *a;
    *a = *b;
    *b = temp;
}

int main (){

    struct data allData[110];
    struct data2 allData2[110];

    FILE *fp = fopen("testdata.in", "r");

    int n, change, visited[110] = {0};
    fscanf(fp,"%d", &n);

    int i, j, k;
    for(i = 0; i < n; i++){
        fscanf(fp,"%s\n", &allData[i].name);
        fscanf(fp,"%d\n", &change);
        for(j = 0; j < change; j++){
            fscanf(fp, "%c %c\n", &allData2[j].first, &allData2[j].end);
        }
    }
    
    for(k = 0; k < change; k++){
        for(i = 0; i < n; i++){
            for(j = 0; j < strlen(allData[i].name); j++){
                if(visited[j] == 0){
                    if(allData2[k].first == allData[i].name[j]){
                        allData[i].name[j] = allData2[k].first;
                        visited[j]++;
                        allData2[k].count++;
                    }
                }
                
            }
        }
    }

    int ans = 0, count[128] = {0};
    for(i = 0; i < n; i++){
        for(j = 0; j < strlen(allData[i].name); j++){
            count[allData[i].name[j]] = 1;
        }
    }
    
    for(i = 0; i < 128; i++){
        ans += count[i];
    }

    for(i = 0; i < change-1; i++){
        for(j = 0; j < change-1; j++){
            if(allData2[j].end > allData2[j+1].end)
            swap(&allData2[j], &allData2[j+1]);
        }
    }

    for(i = 0; i < change; i++){
        if(allData2[i].count != 0){
            printf("%c %d\n", allData2[i].end, ans);
        } 
        
    }
    fclose(fp);

}