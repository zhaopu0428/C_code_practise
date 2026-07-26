#include<stdio.h>
/*
B2098 整数去重 ：整数范围是 10~100，
用一个布尔数组记录是否已出现过即可，时间复杂度 O(n)
*/
int main()
{
    int n;
    scanf("%d", &n);
    int a[101] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (!a[x])
        {
            a[x] = 1;
            if (i > 0)
                printf(" ");
            printf("%d", x);
        }
    }
    return 0;
}