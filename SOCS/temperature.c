#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//celcius = (fahrenheit - 32) * 5 / 9

typedef struct{
    char city[1010];
    double tv;
    char temperature;
}data;

void swap (data *a, data *b) {
    data temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    data allData[110];
    int i = 0;

    FILE *fp = fopen("testdata.in", "r");

    while(!feof(fp)){
        fscanf(fp, "%[^#]#%lf#%c\n", &allData[i].city, &allData[i].tv, &allData[i].temperature);
        i++;
    }

    int j, k;
    for(j = 0; j < i; j++){
        if(allData[j].temperature == 'F'){
            allData[j].tv = (allData[j].tv - 32) * 5 / 9; 
        }
    }
    //selection sort
    for(j = 0; j < i; j++){
        for(k = j+1; k < i; k++){
            if(strcmp(allData[j].city, allData[k].city) > 0){
                swap(&allData[j], &allData[k]);
            }
        }
    }
    // bubble sort
    for(j = 0; j < i-1; j++){
        for(k = 0; k < i-1; k++){
            if(allData[k].tv > allData[k+1].tv){
                swap(&allData[k], &allData[k+1]);
            }
        }
    }

    for(j = 0; j < i; j++){
        if(allData[j].temperature == 'F'){
            allData[j].tv = (allData[j].tv * 9 / 5) + 32; 
        }
    }

    for(j = 0; j < i; j++){
        printf("%s is %.2lf%c\n", allData[j].city, allData[j].tv, allData[j].temperature);
    }

}