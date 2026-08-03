#include <stdio.h>
#include <math.h>
float f(float x,int n)
{
    if(n==1)
    {
        return sqrt(x+1);
    }
    else
    {
        return sqrt(n+f(x,n-1));
    }
}
int main()
{
    float x;
    int n;
    scanf("%f %d",&x,&n);
    printf("%.2f",f(x,n));
    return 0;
}
