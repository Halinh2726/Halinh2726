#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long sum = 0;
	while(n>0){
		sum += n%10;
		n/= 10;
	}
	printf("%lld ", sum);
return 0;
}
