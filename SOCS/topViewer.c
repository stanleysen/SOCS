#include <stdio.h>
#include <string.h>

typedef struct {
    char film[1010];
    char nama[1010];
    long long int angka;
}data;

void swap(data *a, data *b){
    data temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    
    FILE *fp = fopen ("testdata.in", "r");

    data allData[101];

    int x = 0;
    while(!feof (fp)){
        fscanf(fp, "%[^#]#%[^#]#%lld\n", allData[x].film, allData[x].nama, &allData[x].angka);
        x++;
    }

    int i, j;
    for(i = 0; i < x-1; i++){
        for(j = 0; j < x-1; j++){
            if(strcmp(allData[j].film, allData[j+1].film) > 0){
                swap(&allData[j], &allData[j+1]);
            }
        }
    }




    for(i = 0; i < x-1; i++){
        for(j = 0; j < x-1; j++){
            if(allData[j].angka < allData[j+1].angka){
                swap(&allData[j], &allData[j+1]);
            }
        }
    }

    for(i = 0; i < x; i++){
        printf("%s by %s - %lld\n", allData[i].film, allData[i].nama, allData[i].angka);
    }



}