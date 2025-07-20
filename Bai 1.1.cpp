#include <stdio.h>
int main()
  {
  	int n; scanf("%d",&n);
  	int l = 2;
  	for(int i = 1; i <= n-1; i++) printf(" "); printf("*\n"); // ve mot dau *
  	for(int i = 2; i <= n; i++)
  	  {
  	  	for(int j = 1; j <= n-i; j++)// n- so dong tao ra space, 1 sao
  	  	 printf(" ");
  	  	 printf("*");
  	  	for(int j = 1; j < l; j++)
  	  	 printf(" ");
  	  	 printf("*");
  	  	 l+=2;
        for(int j = 1; j <= n-i; j++)
  	  	 printf(" ");
  	  	 printf("\n");
		}
		l-=4;
	for(int i = n-1; i >= 2; i--)
  	  {
  	  	for(int j = 1; j <= n-i; j++)
  	  	 printf(" ");
  	  	 printf("*");
  	  	for(int j = 1; j < l; j++)
  	  	 printf(" ");
  	  	 printf("*");
  	  	 l-=2;
        for(int j = 1; j <= n-i; j++)
  	  	 printf(" ");
  	  	 printf("\n");
		}
		for(int i = 1; i <= n-1; i++) printf(" "); printf("*\n");
  }
