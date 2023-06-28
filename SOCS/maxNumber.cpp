#include <bits/stdc++.h>
using namespace std;
int main (){

    int n, t;
    scanf("%d %d", &n, &t);

    int element[n], pop, max = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &element[i]); getchar();
    }

    for(int i = 0; i < t; i++){
        scanf("%d", &pop); getchar();
        for(int i = 0; i < n; i++){
            if(element[i] == pop){
                element[i] = -1;
            }
        }
    }
for(int i = 0; i < n; i++){
    if(element[i] > max){
        max = element[i];
    }
}

if(max != -1)
    printf("Maximum number is %d\n", max);
else 
    printf("Maximum number is -1\n");
}