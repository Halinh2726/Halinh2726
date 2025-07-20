#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    int chia_nguyen = a / b;
    int chia_du = a % b;
    double chia_thuc = (double)a / b;

    printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", tong, hieu, tich, chia_nguyen, chia_du, chia_thuc);

    return 0;
}
