#include <stdio.h>
int main()
{
    int n , m;
    long long sum = 0;
    scanf("%d %d", &n, &m);
    if (n % 2 == 0&&m % 2 == 0)
    {
        n = n+1;
        m = m-1;
    }
    else if(n % 2 == 0&&m % 2 == 1)
    {
        n = n+1;
    }
    else if(n % 2 == 1&&m % 2 == 0)
    {
        m = m-1;
    }
    for (int i = n; i <= m; i+=2)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}