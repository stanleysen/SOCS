#include <stdio.h>
int main (){

    FILE *openFILE = fopen("barang.txt", "r");

    char barang[101];
    int harga[3];

    int i = 0;
    while(!feof(openFILE)){
        fscanf(openFILE, "%[^\n]#%d\n", barang[i], harga[i]);
        i++;
    }

    fclose(openFILE);
        
    printf("BETAMART :\n");
    printf("Barang - barang yang tersedia :\n");
    int j;
    for(j = 0; j < i; j++){
        printf("%s %d\n", barang[j], harga[j]);
    }













}