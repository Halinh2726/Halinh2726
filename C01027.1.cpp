#include<stdio.h>

int gcd(int a, int b){
	if(a==0 || b == 0) return a+b;
	while(a!= b){
		if(a>b){
			a= a-b;	
		}
		else b=b-a;
	}
	return a;
}

int main(){
	 int t;
    scanf("%d", &t);
    while (t--){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", gcd(a,b));
}
return 0;
}
