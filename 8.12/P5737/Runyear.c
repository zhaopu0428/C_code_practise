#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int count=0;
    int a[y-x];
    int flag=0;
    if(x%4!=0)
    {
        x = x + (4-(x%4));
    }
    for(int i=x;i<=y;i+=4)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
        {
            count++;
            a[flag]=i;
            flag++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
