#include <stdio.h>

int sos(long long int n) {
    int a[19], cnt = 0;
    long long int temp = n;

    // Extract digits from n and store in array a[]
    while (temp > 0) {
        a[cnt++] = temp % 10;
        temp /= 10;
    }

    // Digits are in reverse order: a[0] is least significant digit
    if (cnt < 2) return 0; // Need at least 2 digits for the condition

    if ((a[cnt - 1] * 2 == a[0]) || (a[cnt - 1] == a[0] * 2)) {
        // Check symmetry of digits (palindromic check)
        for (int i = 1; i < cnt / 2; i++) {
            if (a[i] != a[cnt - i - 1])
                return 0;
        }
        return 1;
    }

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int n;
        scanf("%lld", &n);
        if (sos(n)) printf("YES\n");
        else printf("NO\n");
    }
}
