#include <stdio.h>
#include <string.h>
#define MAX 1100001
int a[MAX];
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m>n){
        int temp=m;
        m=n;
        n=temp;
    } 
    memset(a, 0, sizeof(a));
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!a[i])
        {
            if (i >= m) count++;
            for (long long j = (long long)i * i; j <= n; j += i)
                a[j] = 1;
        }
    }
    printf("%d\n", count);
    return 0;
}