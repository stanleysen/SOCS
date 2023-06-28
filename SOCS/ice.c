#include <stdio.h>
int main (){

    int n;
    FILE *fp =fopen("testdata.in", "r");

    fscanf(fp,"%d\n", &n);

    int i, j, index;
    int number[110];

    for(i = 0; i < n; i++){
        int area = 0, perimeter = 0;
        fscanf(fp,"%d\n", &index);

        for(j = 0; j < index; j++){
            fscanf(fp, "%d", &number[j]);
        }

        for(j = 0; j < index; j++){
            area = area + (4*number[j]);
            perimeter = perimeter + (8*number[j] - (4*(number[j] - 1)));
            if(j != index-1){
                if(number[j] <= number[j+1]){
                    perimeter = perimeter - (4*number[j]);
                } else {
                    perimeter = perimeter - (4*number[j+1]);
                }
            }
        }
        printf("Case #%d: %d %d\n", i+1, perimeter, area);

    }
}