#include <stdio.h>
int main (){
	int jmlh1;
	int nomor = 1;
	
	scanf("%d",&jmlh1);
	int angka[jmlh1];
	
	int i; // array input kedua
	for(i = 0; i < jmlh1; i++){
		scanf("%d", &angka[i]);
	}	
	//=============================
	int jmlh2 = 0;
	scanf("%d", &jmlh2); // input mau brp perubahan
	
	while (jmlh2 > 0){
	int a, b;
		scanf("%d %d", &a, &b);
		angka[a-1] = b;
		
		printf("Case #%d: ",nomor);
		
		int j;
		for(j = 0; j < jmlh1; j++){
			if(j < (jmlh1 - 1)){
				printf("%d ", angka[j]);
			} else if(j == (jmlh1 - 1)){
				printf("%d\n", angka[j]);
			}
			
		}
		jmlh2--;
		nomor++;
	}	
	
}
