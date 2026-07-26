#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[101]={0};
    for (int i = 1; i <= n; i++)
    {
        scanf("%d ", &a[i]);
    }
    int s = 0;
    scanf("%d", &s);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == s)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}