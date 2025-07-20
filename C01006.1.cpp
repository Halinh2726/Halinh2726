#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	if(y==0){
		printf("0\n");
	}
	else {
	printf("%d %d %d %.2f %d", x+y, x-y, x*y, (float)x/y, x%y);
	}
	return 0;
	}
