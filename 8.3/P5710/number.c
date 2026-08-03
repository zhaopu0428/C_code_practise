#include <stdio.h>
int one(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int two(int n)
{
    if(n>4 && n<=12)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(one(n) && two(n))
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if((one(n) || two(n))||(one(n) && two(n)))
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if(one(n) != two(n))
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if(one(n) != 1 && two(n)!=1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}