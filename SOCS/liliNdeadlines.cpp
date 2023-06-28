#include <stdio.h>
#include <string.h>
using namespace std;

struct data{
    char lec[11];
    long int num;
};

int main (){

    long int n, temp_num = 0;
    char temp[11];
    scanf("%d",&n); 
        
    struct data allData[n];

    int i;
    for(i = 0; i < n; i++){
        scanf("%s %d",allData[i].lec, &allData[i].num); getchar();
    }

    int j, k;
    for(j = 0; j < n; j++){
        for(k = j+1; k < n; k++){
            if(allData[j].num > allData[k].num){
                temp_num = allData[j].num; strcpy(temp, allData[j].lec);
                allData[j].num = allData[k].num; strcpy(allData[j].lec, allData[k].lec);
                allData[k].num = temp_num; strcpy(allData[k].lec, temp);
            }
        }
    }

    int l;
    for(l = 0; l < n-1; l++){
        if(allData[l].num == allData[l+1].num){
            if(strcmp(allData[l].lec, allData[l+1].lec) > 0){
                strcpy(temp, allData[l].lec);
                strcpy(allData[l].lec, allData[l+1].lec);
                strcpy(allData[l+1].lec, temp);
            }
        }
    }

    int m;
    for(m = 0; m < n; m++){
        printf("%s\n", allData[m].lec);
    }

}