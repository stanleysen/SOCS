#include <stdio.h>
void trees (int Position, int Sum, int Data[], int Size){
    int a = Data[Position]; // pos = 0 
    if(Position * 2 + 1 < Size){ // sum = 3 + 4 = 7
        trees(Position * 2 + 1, Sum + a, Data, Size);
            
        if(Position * 2 + 2 < Size) 
            trees(Position * 2 + 2, Sum + a, Data, Size);
    } else {
        printf("%d\n", Sum + a); 
    }
}
//5
// 1 2 3 4 5
int main (){

    int n, numbering = 1;
    scanf("%d", &n);

    while(n--){
        int index, sum = 0, pos = 0;
        scanf("%d", &index);

        int array[index];

        int i;
        for(i = 0; i < index; i++){
            scanf("%d", &array[i]);
        }

        printf("Case #%d:\n", numbering);
        trees(pos, sum, array, index);
        numbering++;

    }
}