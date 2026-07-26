#include<stdio.h>
int Max(int a,int b,int c,int d,int e,int *max_index)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    if(e>max)
    {
        max=e;
    }
    if(max==a)
    {
        *max_index=0;
    }
    else if(max==b)
    {
        *max_index=1;
    }
    else if(max==c)
    {
        *max_index=2;
    }
    else if(max==d)
    {
        *max_index=3;
    }
    else if(max==e)
    {
        *max_index=4;
    }
    return max;
}
int Min(int a,int b,int c,int d,int e,int *min_index)
{
    int min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    if(d<min)
    {
        min=d;
    }
    if(e<min)
    {
        min=e;
    }
    if(min==a)
    {
        *min_index=0;
    }
    else if(min==b)
    {
        *min_index=1;
    }
    else if(min==c)
    {
        *min_index=2;
    }
    else if(min==d)
    {
        *min_index=3;
    }
    else if(min==e)
    {
        *min_index=4;
    }
    return min;
}
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        
        int max_index,min_index;
        int max= Max(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],&max_index);
        int min=Min(a[0][max_index],a[1][max_index],a[2][max_index],a[3][max_index],a[4][max_index],&min_index);
        if(max==min)
        {
            printf("%d %d %d\n", i+1, max_index+1,max);
            return 0;
        }
    }
    printf("not found\n");
    return 0;
}