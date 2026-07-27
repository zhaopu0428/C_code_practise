#include<stdio.h>
#include<math.h>
int max(int a,int b,int c)
{
    return fmax(a,fmax(b,c));
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x,y,z;
    x = max(a,b,c);
    y = max(a+b,b,c);
    z = max(a,b,b+c);
    printf("%.3f\n",x/(float)(y*z));
    return 0;
}