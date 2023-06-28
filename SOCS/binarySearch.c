#include <stdio.h>
#include <math.h>
#define ull unsigned long long

int binarySearch(ull left, ull right, ull search);

int main(){

    int n;
    scanf("%d", &n);
	int i;
    for(i = 0; i < n; i++){
        ull search;
        scanf("%llu", &search); getchar();
        ull hasil = binarySearch(1, 1500000, search);
        printf("Case #%d: %llu\n", i+1, hasil);
    }
}

int binarySearch(ull left, ull right, ull search){
	if (left <= right){
		ull mid = left + (right - left) / 2;
		ull key = mid * (mid + 1) * (2 * mid + 1) / 6;
		
		if (key == search){
			return mid;
		}
		if (key > search){
			return binarySearch(left, mid-1, search);
		}
		if (key < search){
			return binarySearch(mid+1, right, search);
		}
	}
	return right + 1;
}
