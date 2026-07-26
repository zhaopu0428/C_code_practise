#include<stdio.h>
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
    int m,n;
    scanf("%d %d", &m, &n);
    m-=1;
    n-=1;
    if(n<m)
    {
        int temp=m;
        m=n;
        n=temp;
    }
    for (int i = 0; i < 5; i++)
    {
        if(i==m)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", a[n][j]);
            }
            printf("\n");
        }
        else if(i==n)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", a[m][j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}