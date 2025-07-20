#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int compare(char a[], char b[]){
	int A= strlen(a);
	int B=strlen(b);
	if(A>B) return 1;
	if(B>A) return -1;
	return strcmp(a,b);
}

int main(){
	char a[21];
	char b[21] = "0";
	char c[21] = "10e9";
	while((scanf("%20s", a)==1)){
		if(compare(a,b)>0){
			strcpy(b,a);
		}
		if(compare(a,c)<0){
			strcpy(c,a);
		}
	}
	printf("%s %s", b,c);
}
