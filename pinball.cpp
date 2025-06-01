#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char a[n];
    for (int i=0; i<n; i++)
        scanf("%c", &a[i]);
    int t=n, p=n;
    for (int i=0; i<n; i++){
        if (a[i]!='<') {
            t=i;
            break;
        }
    }
    for (int i=n-1; i>=0; i--)
        if (a[i]!='>') {
            p=n-1-i;
            break;
        }
    
    printf("%d", t+p);
    return 0;
}
