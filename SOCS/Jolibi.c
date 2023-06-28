#include <stdio.h>
int main (){
	// line 1 = nilai orang
	// line 2 = nilai jo, li, bi
	
	int jojo, lili, bibi, parti;
	scanf("%d", &parti);
	int nilai_parti[parti];
	
	scanf("%d %d %d", &jojo, &lili, &bibi);
	
	int sum = jojo + lili + bibi;
	int sum1 = 0;
	
	int i;
	for(i = 0; i < parti; i++){
		scanf("%d",&nilai_parti[i]);
		sum += nilai_parti[i];
	}
	
	int average = (sum + sum1) / (3 + parti);
	
	if(jojo >= average){
		printf("Jojo lolos\n");
	} else {
		printf("Jojo tidak lolos\n");
	}
	
	if(lili >= average){
		printf("Lili lolos\n");
	} else {
		printf("Lili tidak lolos\n");
	}
	
	if(bibi >= average){
		printf("Bibi lolos\n");
	} else {
		printf("Bibi tidak lolos\n");
	}	
}
