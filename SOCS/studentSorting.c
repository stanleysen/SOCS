#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[101];
    char nomor[11];
}data;

void swap(data *a, data *b){
    data temp = *a;
    *a = *b;
    *b = temp;
}

int main (){

    FILE *fp = fopen ("testdata.in", "r");

    int n;
    fscanf(fp, "%d",&n);
    data allData[n];
    // fclose(fp);
    

    int x = 0;
    while(!feof(fp)){
        fscanf(fp, "%s %s\n", allData[x].nomor, allData[x].nama);
        x++;
    }

    int i, j;
    for(i = 0; i < x-1; i++){
        for(j = 0; j < x-1; j++){
            if(strcmp(allData[j].nomor,allData[j+1].nomor) > 0){
                swap(&allData[j], &allData[j+1]);
            }
        }
    }

    for(i = 0; i < x; i++){
        printf("%s %s\n", allData[i].nomor, allData[i].nama);
    }


}
