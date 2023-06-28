#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char word[1050];
    int shifting;
}data;

data allData[110];

void convert(data *a, int index){
    int j;
    for(j = 0; j < strlen(allData[index].word); j++){
        if(allData[index].word[j] == ' '){
            continue;
        }
        else if(allData[index].word[j] == '0'){
            allData[index].word[j] = 'O';
        } 
        else if(allData[index].word[j] == '1'){
            allData[index].word[j] = 'I';
        }
        else if(allData[index].word[j] == '3'){
            allData[index].word[j] = 'E';
        }
        else if(allData[index].word[j] == '4'){
            allData[index].word[j] = 'A';
        }
        else if(allData[index].word[j] == '5'){
            allData[index].word[j] = 'S';
        }
        else if(allData[index].word[j] == '6'){
            allData[index].word[j] = 'G';
        }
        else if(allData[index].word[j] == '7'){
            allData[index].word[j] = 'T';
        }
        else if(allData[index].word[j] == '8'){
            allData[index].word[j] = 'B';
        }
    }
}

int main(){

    int n, t;

    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d", &n);
    
    int x = 0;
    while(!feof(fp)){
        if(x == 0){
            fscanf(fp, "%d\n", &allData[x].shifting);
            fscanf(fp, "%[^\n]\n", &allData[x].word); 
            x++;
        } else {
            fscanf(fp, "%d\n", &allData[x].shifting);
            fscanf(fp, "%[^\n]\n", &allData[x].word);
            x++;
        }
    }
    
    int i, j;
    for(i = 0; i < n; i++){
         convert(&allData[i], i);
    }

    for(i = 0; i < x; i++){
        for(j = 0; j < strlen(allData[i].word); j++){
            if(allData[i].word[j] == ' '){
                continue;
            } else {
                if(allData[i].word[j] - allData[i].shifting < 65){
                    allData[i].word[j] = allData[i].word[j] - allData[i].shifting + 26;
                } else {
                    allData[i].word[j] = allData[i].word[j] - allData[i].shifting;
                }
            }
        }
    }

    for(i = 0; i < x; i++){
        printf("Case #%d: %s\n", i+1, allData[i].word);
    }
    
}