#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n<=1) return 0;
	for(int i=2; i<= sqrt(n); i++){
		if(n%i == 0) 
		return 0;
		return 1;
	}
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int a; scanf("%d", &a);
		if(snt(a)==1) printf("YES\n");
		else
		printf("NO\n");
	}
return 0;
}
