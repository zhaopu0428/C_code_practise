#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[10000]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

    }
    int s = 0;
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {   
        if (a[i] == s)
        {
            printf("%d ", i);
            break;
        }
        if(i == n - 1&&a[i] != s)
        {
            printf("-1");
        }
    }
    return 0;
}