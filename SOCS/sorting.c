#include <stdio.h>
#include <string.h>

struct data{
    char name[55];
    int num;
};

int main (){
    
    int n, numbering = 1;
    char temp[51]; int temp_num = 0;
    scanf("%d",&n); getchar();

        while(n--){
            int t;
            scanf("%d",&t); getchar();
            struct data allData[t];

            int i;
            for(i = 0; i < t; i++){
                scanf("%[^#]#%d", &allData[i].name, &allData[i].num); getchar();
            }

            int j, k;
            for(j = 0; j < t; j++){ // t = 3
                for(k = j+1; k < t; k++){
                    if(allData[j].num < allData[k].num){
                        temp_num = allData[j].num; strcpy(temp, allData[j].name);
                        allData[j].num = allData[k].num; strcpy(allData[j].name, allData[k].name);
                        allData[k].num = temp_num; strcpy(allData[k].name, temp);
                    } 
                }
            }
            int p;
            for(p = 0; p < t-1; p++){
                if(allData[p].num == allData[p+1].num){
                    if(strcmp(allData[p].name, allData[p+1].name) > 0){
                        strcpy(temp, allData[p].name);
                        strcpy(allData[p].name, allData[p+1].name);
                        strcpy(allData[p+1].name, temp);
                    }
                }
            }

            printf("Case #%d:\n", numbering);
            int l;
            for(l = 0; l < t; l++){
                printf("%s - %d\n", allData[l].name, allData[l].num);
            }
            numbering++;
        }

}