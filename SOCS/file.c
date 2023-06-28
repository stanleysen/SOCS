#include <stdio.h>
#include <string.h>

struct data{
    char stands[55];
    char ori[55];
};

int main () {
    int n;
    char sentence[105];

    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &n);

    struct data allData[n];

    int i;
    for(i = 0; i < n; i++) {
        fscanf(fp, "%[^#]#%[^\n]\n", allData[i].stands, allData[i].ori);
    }
    
    int t;
    fscanf(fp, "%d\n", &t);
    
    int j;
    for(j = 0; j < t; j++) {
        fscanf(fp, "%[^\n]\n", sentence);
        printf("Case #%d:\n", j+1);

        char d[] = " ";
        char *str = strtok(sentence, d);
        int check = 1;
        
        while(str != NULL) {
            int check2 = 0;
            int l;
            for (l = 0; l < n; l++) {
                if(strcmp(str, allData[l].stands) == 0) {
                    check2 = -1;
                    if(check){                     
                        printf("%s", allData[l].ori);
                        check = 0;
                    } else {
                        printf(" %s", allData[l].ori);
                    }
                    break;
                }
            }
            if(check2 != -1) {
                if(check){
                    printf("%s", str);
                    check = 0;
                } else {
                    printf(" %s", str);
                }
            }
            str = strtok(NULL, d);
        }
        printf("\n");
    } 
}


