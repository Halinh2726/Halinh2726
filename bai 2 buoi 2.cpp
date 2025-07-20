#include <stdio.h>

int A[10000000] = {0};

int main(){
	int n; scanf("%d", &n);
	int max = 0; 
	for(int i = 0; i<n; i++){
		int k; scanf("%d", &k); 
		if(max < k) max = k ;
		A[k]++; 
	} 
	for(int i = 1; i<=max; i++){
		if(A[i] == 0) {
			printf("%d", i) ;
			break;
		}
	} 
	return 0; 
} 
