
#include<stdio.h>
#include<math.h>
#define MAX 1000000;

int a[1000000];
void check(int n){
	for(int i = 0; i <=n; i++){
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i = 2; i*i <=n; i++){
		if(a[i] == 1){
			for(int j = i*i; j<=n; j+= i){
				a[j] = 0;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	check(n);
	for(int i = 0; i<=n;i++){
		if(a[i]==1){
			printf("%d ", i);
		}
	}
}
