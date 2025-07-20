#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i =1 ; i<= t; i++){
		long long a;
		scanf("%lld", &a);
		int max = a % 10;
		int min = a %10;
		long long b = a/10;
		int c;
		while(b>0){
			c = b %10;
			if(max <= c) max = c;
			else if(min >= c) min = c;
			b /= 10;
		
		}
			printf("%d %d\n", max, min); 
	}
	return 0;
}
