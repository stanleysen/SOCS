#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main(){
    int tc,n;
    char str[107];
    char a,b;
    FILE *fp = fopen("testdata.in","r");

    //scan testcase
    fscanf(fp,"%d\n",&tc);

    for (int t = 0; t < tc; t++)
    {
        int count[2000]={0};

        //scan string sama n
        fscanf(fp,"%[^\n]\n",str);
        fscanf(fp,"%d\n",&n);

        for (int i = 0; i < n; i++)
        {
            //baca a dan b, terus ganti a di str jadi b
            fscanf(fp,"%c %c\n",&a,&b);
            int len=0;
            while(str[len]!=' '){
                if(str[len]==a) str[len]=b;
                len++;
            }
        }

        //ngitung ada berapa character di string baru
        int idx=0;
        while(str[idx]!=' '){
            count[str[idx]]+=1;
            idx++;
        }
        
        //print distinct alphabet, sama jumlahnya
        for (int i = 65; i < 91; i++)
        {
            if(count[i]!=0) printf("%c %d\n",i,count[i]);
        }
    }
    
    fclose(fp);

return 0;
}