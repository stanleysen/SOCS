#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[55];
    int num;
} bangJago;

void swap(bangJago *a, bangJago *b)
{
    bangJago temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int N;
    int i = 0;

    FILE *sumber;
    sumber = fopen("testdata.in", "r");
    fscanf(sumber, "%d", &N);

    bangJago data[N] = {};

    while (!feof(sumber))
    {
        fscanf(sumber, "%d#", &data[i].num);
        fscanf(sumber, "%[^\n]", &data[i].name);
        i++;
    }
    fclose(sumber);

    for (int y = 0; y < N - 1; y++)
    {
        for (int z = y + 1; z < N; z++)
        {
            if ((data[y].name[0] > data[z].name[0]) || (data[y].name[0] == data[z].name[0]))
            {
                swap(&data[y], &data[z]);
            }
        }
    }

    for (int yyy = 0; yyy < N; yyy++)
    {
        printf("%d %s\n", data[yyy].num, data[yyy].name);
    }

    return 0;
}