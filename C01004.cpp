#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
	double n; 
	scanf("%lf", &n);
	double k = 1/n;
	
	printf("%.15lf\n", k);
}
return 0;
}
