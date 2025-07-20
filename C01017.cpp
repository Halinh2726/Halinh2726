#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int sqrtn = (int)sqrt(n);
		if(sqrtn*sqrtn == n){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
return 0;
}


