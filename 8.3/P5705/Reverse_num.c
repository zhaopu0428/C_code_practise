#include <stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    int x = (int)(n*10);
    int y =0;
    while(x!=0)
    {
        y = y*10 + (x%10);
        /*
        y += (x%10)*1000 
        试图把每个数字放到千位，
        但这样无法正确反转。
        正确做法是 y = y*10 + (x%10) ，逐位拼接。
        */
        x/=10;
    }
    printf("%.3f",y/1000.0);
    return 0;
}
