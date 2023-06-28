#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *fp = fopen("testdata.in", "r");

    int a, b;
    fscanf(fp,"%d %d", &a, &b);

    printf("%d\n", a+b);
}