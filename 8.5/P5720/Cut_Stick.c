#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x =1;
    for(int i=1;;i++)
    {
        if(n==1)
        {
            break;
        }
        n = (int)n/2;
        x++;
    }
    printf("%d",x);
    return 0;
}