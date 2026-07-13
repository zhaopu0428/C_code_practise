#include <stdio.h>
int main()
{
    long long x,y ;   //题目要求的输入范围超出了int的范围，所以用long long
    scanf("%lld %lld",&x,&y);
    if(x>y)
    {
        printf(">");
    }
    else if(x<y)    
    {
        printf("<");
    }
    else
    {
        printf("=");
    }
    return 0;
}