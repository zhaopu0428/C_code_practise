#include <stdio.h>
int main()
{
    long int n = 0;
    scanf("%ld", &n);
    long int a = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a);
        sum += a;
    }
    printf("%lld %.5lf", sum, (double)sum / n);
    return 0;
}