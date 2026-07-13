#include <stdio.h>
int Find_min(int n)
{
    if (n%17==0)
    {
        return n;
    }
    else
    {
        n += 1;
        Find_min(n);
    }
}
int Find_max(int n)
{
    if (n%17==0)
    {
        return n;
    }
    else
    {
        n -= 1;
        Find_max(n);
    }
}
int main()
{
    int m , n =0;
    scanf("%d %d", &m, &n);
    int x = Find_min(m);
    int y = Find_max(n);
    int i  = (y-x)/17 + 1;
    printf("%d", ((x + y)*i)/2);
    return 0;
}