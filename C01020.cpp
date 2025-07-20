#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		for(int i=2; i<= sqrt(a); i++){
			while(a%i == 0){
				printf("%d ", i);
				a/=i;
			}
	
		}
			if (a>1){
			printf("%d", a);
			
		}
		printf("\n");
	}
return 0;
}
