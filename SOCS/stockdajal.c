#include <stdio.h>
#include <string.h>

struct data {
    char bs[5];
    char product[110];
    int totalProduct;
};

int main (){

    struct data allData[110];

    int i, j, k, l, m, n, nn, o, p, q;
    int tbs;

    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &n); fflush(stdin);
    
    for(i = 0; i < n; i++){
        int check[110] = {0};

        //reset 
        for(p = 0; p < tbs; p++){
            allData[p].result = 0;
            allData[p].totalProduct = 0;
        }

        fscanf(fp, "%d\n", &tbs); fflush(stdin);

        for(j = 0; j < tbs; j++){
            fscanf(fp, "%[^#]#%[^#]#%d\n", &allData[j].bs, &allData[j].product, &allData[j].totalProduct);
            fflush(stdin);
        }

        // buy phase
        int tempBuy = 0, tempSell = 0, result = 0;
        for(k = 0; k < tbs; k++){
            if(strcmp(allData[k].bs, "buy") == 0){
                for(r = 0; r < tbs; r++){

                }
            }
            
        }

        // sell phase
        for(l = 0; l < tbs; l++){
            if(strcmp(allData[l].bs, "sell") == 0){
                for(m = 0; m < tbs; m++){
                    if(strcmp(allData[m].product, allData[l].product) == 0){
                        allData[m].result = allData[m].result - allData[l].totalProduct;
                    }
                }
            }
        }
            // printf("TEST %d ea anjing ",allData[1].result);

        printf("Case #%d:\n", i + 1);
        for(nn = 0; nn < tbs; nn++){
            if(allData[nn].result >= 0){
                printf("%s - %d\n", allData[nn].product, allData[nn].result);
            }
        }

    }
}