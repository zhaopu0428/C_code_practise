#include<stdio.h>
int main()
{
    int a[100][100];
    int m,n;
    int sum = 0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
            {
                sum += a[i][j];
            }
            /*
            直接遍历每个元素，判断是否在边界上 ，
            在边界上就加一次，不在就不加——不管矩阵是 
            1×1、1×3、3×1 还是 100×100，这个逻辑都是对的，
            不需要考虑"重复计算"的问题。
            */
        }
    }
    printf("%d", sum);
    return 0;
}