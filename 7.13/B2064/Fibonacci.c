#include <stdio.h>
int main()
{
    long long f[31];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3;i<=30;i++){
        f[i] = f[i-1]+f[i-2];
    }
    int n = 0;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        int a ;
        scanf("%d", &a);
        printf("%lld\n", f[a]);
    }
}
