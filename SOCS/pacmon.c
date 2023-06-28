#include <stdio.h>
// dfs
char start[100][100];
int checked [100][100];
int collumn, row;
int tx, ty;
int countFood = 0;
                    
void search_Path (int x, int y){
    if (x >= collumn || y >= row || y < 0 || x < 0)
        return;
    if (checked [x][y] == 1 || start[x][y] == '#')
        return;

    checked [x][y] = 1;

    if (start[x][y] == '*'){
        countFood++;
        search_Path (x + 1, y);
        search_Path (x - 1, y);
        search_Path (x, y + 1);
        search_Path (x, y - 1);
    }

    else{
        search_Path (x + 1, y);
        search_Path (x - 1, y);
        search_Path (x, y + 1);
        search_Path (x, y - 1);
    }
}

int main(){
    long long int n, numbering = 1;
    scanf("%lld", &n);
    while(n--){
        countFood = 0;
        scanf("%d %d", &collumn, &row);
        getchar();

        for (int i = 0; i < collumn; i++){
            for (int j = 0; j < row; j++){
                scanf("%c", &start[i][j]);
                if (start[i][j] == 'P'){
                    tx = i;
                    ty = j;
                }
                checked [i][j] = 0;
            }
            getchar();
        }

        search_Path (tx, ty);

        printf("Case #%d: %d\n", numbering, countFood);
        numbering++;
    }
    return 0;
}