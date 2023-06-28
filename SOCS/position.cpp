#include <stdio.h>
int binarySearch(int array[],int size,int search){
   int count = -2;
   int left =0 , right = size - 1, mid;
   while(left <= right){
       mid = (left + right) / 2;
       if(array[mid] < search){
           left = mid + 1;
       } else {
           if(array[mid] == search)
           count = mid; 
           right = mid - 1;
       }
   }
   return count + 1;
}

int main(){
    int n, t; 
    scanf("%d%d",&n, &t);

    int array[n], search[t];

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < t; i++){
        scanf("%d", &search[i]);
        int result = binarySearch(array, n, search[i]);
        printf("%d\n", result);
    }

    return 0;
}
