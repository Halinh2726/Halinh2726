#include <stdio.h>

int main()
{
	long long t;
	scanf("%lld", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		long long dau, cuoi = n % 10;
		while(n)
		{
			dau = n % 10;
			n/=10;
		}
		if(dau==cuoi) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

