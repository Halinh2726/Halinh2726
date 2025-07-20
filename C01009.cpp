#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	long long so_ngay;
	scanf("%lld", &so_ngay);
	long long nam= so_ngay/365;
	long long tuan=(so_ngay - 365*nam)/7;
	long long ngay = so_ngay - nam*365 - tuan*7;
	printf("%lld %lld %lld", nam, tuan, ngay);
return 0;
}
