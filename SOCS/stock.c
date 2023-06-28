#include <stdio.h>
#include <string.h>

struct data{
    char product[51];
    int item;
};

int search(char str[], int tbs, struct data allData[]);

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int n, t;
    
    fscanf(fp, "%d\n", &n);

    struct data temp;
    
    int i;
    for(i = 0; i < n; i++){
        fscanf(fp, "%d\n", &t);

        struct data allData[t];

        int j, tbs = 0;
        char bs[101];
        
        for( j = 0; j < t; j++){
            fscanf(fp, "%[^#]#%[^#]#%d\n", bs, temp.product, &temp.item);       

            int result = search(temp.product, tbs, allData);   

            if(result == -1){ 
                strcpy(allData[tbs].product, temp.product);
                if(strcmp(bs, "sell") == 0){
                    allData[tbs].item = -temp.item;
                } else if(strcmp(bs, "buy") == 0){
                    allData[tbs].item = temp.item;
                }
                tbs++;
            } else if(result != -1){ // item found
                if(strcmp(bs, "sell") == 0){
                    allData[result].item -= temp.item;
                } else if(strcmp(bs, "buy") == 0){
                    allData[result].item += temp.item;
                }
            }
        }

        printf("Case #%d:\n", i+1);

        int check = 0;
        for(j = 0; j < tbs; j++){
            if(allData[j].item < 0){
                printf("stock is not enough for product %s\n", allData[j].product);
                check = 1;
            }
        }
        if(!check){
            for( j = 0; j < tbs; j++){
                printf("%s - %d\n", allData[j].product, allData[j].item);
            }
        }


    }
    return 0;
}

int search(char str[], int tbs, struct data allData[]) {
    int result = -1;
    for(int i = 0; i < tbs; i++){
        if(strcmp(str, allData[i].product) == 0){
            result = i;
            return result;
        }
    }
    return result;
}