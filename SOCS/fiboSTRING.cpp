#include <bits/stdc++.h>
using namespace std;
int main (){

    int n, numbering = 1;
    cin >> n;

    while(n--){
        int order;
        string f0, f1, fn;
        cin >> order >> f0 >> f1;

        int i;
        for(i = 2; i <= order; i++){
            fn = f1 + f0;
            f0 = f1;
            f1 = fn;
        }

        if(order == 0){
            fn = f0;
        } else if (order == 1){
            fn = f1;
        }
        
    cout << "Case #" << numbering << ": " << fn << "\n";
    numbering++;
    }
}