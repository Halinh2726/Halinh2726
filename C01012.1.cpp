#include <stdio.h>
#include <math.h>

int hh(int n){
	int cnt=0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0 && i*i!=n ) cnt+=(i+n/i);
		else if (n%i==0 && i*i==n) cnt+=i;
	}
	return cnt+1==n;
}
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int c=fmin(a,b);
	for (int i=c; i<=(a+b-c); i++)
		if (hh(i) && i!=1) printf("%d ", i);
}
