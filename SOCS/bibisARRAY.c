#include <stdio.h>
int main (){

    int n, numbering = 1;
    scanf("%d",&n);

    while(n > 0){
        long int num;
        scanf("%ld",&num);
    
    int array[num];
    int frequency[200001];
    int mode[200001];

        // set semua array = 0; ||  memset
        int a;
        for(a = 0; a < 200001; a++){
            frequency[a] = 0;
            mode[a] = 0;
        }

        // input angka dan itung frekuensi tiap angka
        int i;
        for(i = 0; i < num; i++){
            scanf("%ld",&array[i]);
            frequency[array[i]]++;
        }

        // cari frekuensi terbesar
        int j;
        int max = 0;
        for(j = 0; j < 200001; j++){
            if(frequency[j] > max){
                max = frequency[j];
            }
        }

        // cari modus dari frekuensi terbesar
        int l;
        int count = 0;
        for(l = 0; l < 200001; l++){
            if(frequency[l] == max){
                mode[count] = l;
                count++;
            }
        }

        printf("Case #%d: %d\n", numbering, max);
        int m;
        for(m = 0; m < count; m++){
            if(m < count-1){
                printf("%d ", mode[m]);
            } else if(m == count-1){
                printf("%d\n", mode[m]);
            }
        }
        n--;
        numbering++;
    }

}