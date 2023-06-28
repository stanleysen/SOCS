#include <stdio.h>
#include <string.h>

typedef struct {
    char a[210];
}data;

void swap(data *a, data *b) {
    data temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int R, C;
    char nama[210];
    char temp;

    scanf("%d %d", &R, &C);

    data allData[R];

    int i, j, k;
    for(i = 0; i < R; i++){
        scanf("%s", nama); getchar();
        for(j = 0; j < strlen(nama)-1; j++){
            for(k = 0; k < strlen(nama)-1; k++){
                if(nama[k] > nama[k+1]){
                    temp = nama[k];
                    nama[k] = nama[k+1];
                    nama[k+1] = temp;
                }
            }
        }
        strcpy(allData[i].a, nama);
    }

    for(i = 0; i < R-1; i++){
        for(j = 0; j < R-1; j++){
            if(strcmp(allData[j].a, allData[j+1].a) < 0){
                swap(&allData[j], &allData[j+1]);
            }
        }
    }

    for(i = 0; i < R; i++){
        printf("%s\n", allData[i].a);
    }
}