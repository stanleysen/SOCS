#include <bits/stdc++.h>
using namespace std;
int main (){

    int n, numbering = 1;
    cin >> n;

        while(n--){
            int t, count = 0;
            cin >> t;

            int array[t];
            int i;
            for(i = 0; i < t; i++){
                cin >> array[i];
            }

            sort(array, array + t);
            int j;
            for(j = 0; j < t; j++){
                if(array[t-1] == array[j]){
                    count++;
                }
            }

            cout << "Case #" << numbering << ": " << count << "\n";
            numbering++;

        }



}