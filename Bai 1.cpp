#include <stdio.h>
int main()
  {
  	int t; scanf("%d", &t);
  	while(t--)
	{
	  
  	int n; scanf("%d",&n);
  	int l = 2;
  	for(int i = 1; i <= n-1; i++) printf(" "); printf("*\n");
  	for(int i = 2; i <= n; i++) // ve nua tren hinh thoi rong
  	  {
  	  	for(int j = 1; j <= n-i; j++)
  	  	 printf(" ");
  	  	 printf("*");
  	  	for(int j = 1; j < l; j++)
  	  	 printf(" ");
  	  	 printf("*");
  	  	 l+=2;// dau cach o trong tam giac tren
        for(int j = 1; j <= n-i; j++)
  	  	 printf(" ");
  	  	 printf("\n");
		}
		l-=4;
	for(int i = n-1; i >= 2; i--) // ve nua duoi hinh thoi rong
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
}
