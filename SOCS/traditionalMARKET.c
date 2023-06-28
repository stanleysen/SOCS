#include <stdio.h>
int main (){
	// daging, sayur, telur
	
	long int d, s, t;
	scanf("%ld %ld %ld", &d, &s, &t);
	getchar();
	
	if(d > s && s > t){
		printf("Daging\nSayur\nTelur\n");
	} else if(d > t && t > s){
		printf("Daging\nTelur\nSayur\n");
	} else if(s > d && d > t){
		printf("Sayur\nDaging\nTelur\n");
	} else if(s > t && t > d){
		printf("Sayur\nTelur\nDaging\n");
	} else if(t > s && s > d){
		printf("Telur\nSayur\nDaging\n");
	} else if(t > d && d > s){
		printf("Telur\nDaging\nSayur\n");
	}
	
	
}
