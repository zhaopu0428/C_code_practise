#include <stdio.h>

int multi(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*multi(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",multi(n));
    return 0;
}