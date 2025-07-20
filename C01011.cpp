#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if(a == 0){
		if (b == 0){
			if(c != 0){
				printf("NO");
			}
		}
		else{
			printf("%.2f", -c/b);
		}
	}
	else{
		float delta = b*b - 4*a*c;
		if(delta < 0){
			printf("NO");
			}
		else if (delta == 0){
			printf("%.2f", (b)/-2*a);
			}
		else {
			printf("%.2f %.2f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
		}
	}
		return 0;
	}
