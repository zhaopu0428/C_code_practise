#include <stdio.h>
#include <math.h>
int main()
{
    long long a;
    int n;
    scanf("%lld %d", &a, &n);
    printf("%lld", (long long)pow(a, n));
    return 0;
}