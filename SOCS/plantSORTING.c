#include <stdio.h>
#include <string.h>

struct data{
    char name[41];
    long int num;
};

int main (){
    FILE *fp = fopen("testdata.in", "r");

    int n, temp_num = 0;
    char temp[41];
    fscanf(fp, "%d", &n);

    struct data allData[n];

    int i;
    for(i = 0; i < n; i++){
        fscanf(fp, "%d#%[^\n]", &allData[i].num, &allData[i].name);
    }

    fclose(fp);

    int j,k;
    for(j = 0; j < n; j++){
        for(k = j+1; k < n; k++){
            if(strcmp(allData[j].name,allData[k].name) > 0){
                strcpy(temp, allData[j].name); temp_num = allData[j].num;
                strcpy(allData[j].name, allData[k].name); allData[j].num = allData[k].num;
                strcpy(allData[k].name, temp); allData[k].num = temp_num;
            }
        }
    }

    int l;
    for(l = 0; l < n; l++){
        printf("%d %s\n", allData[l].num, allData[l].name);
    }

}