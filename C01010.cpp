#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	long long a,b;
	scanf("%lld %lld", &a, &b);
	if(a==0 && b== 0){
		printf("Vo so nghiem");
	} else if(a== 0 && b != 0){
		printf("Vo nghiem");
	} else if(a!= 0 && b == 0){
		printf("0");
	} else {
		printf("%.2f", (float)-b/a);
	}
return 0;
}
