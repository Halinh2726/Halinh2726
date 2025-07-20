#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	double k = a/b;
	if(b == 0){
		printf("0\n");
	}
	else{
	printf("%d %d %d %.2lf %d", a+b,a-b,a*b,k,a%b);
	}
return 0;
}
