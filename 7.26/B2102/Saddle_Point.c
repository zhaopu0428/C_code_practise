#include <stdio.h>

int findMax(int a, int b, int c, int d, int e, int *idx)
{
    int max = a;
    *idx = 0;
    if (b > max) { max = b; *idx = 1; }
    if (c > max) { max = c; *idx = 2; }
    if (d > max) { max = d; *idx = 3; }
    if (e > max) { max = e; *idx = 4; }
    return max;
}

int findMin(int a, int b, int c, int d, int e, int *idx)
{
    int min = a;
    *idx = 0;
    if (b < min) { min = b; *idx = 1; }
    if (c < min) { min = c; *idx = 2; }
    if (d < min) { min = d; *idx = 3; }
    if (e < min) { min = e; *idx = 4; }
    return min;
}

int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 5; i++)
    {
        int col_idx, row_idx;
        int row_max = findMax(a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], &col_idx);
        int col_min = findMin(a[0][col_idx], a[1][col_idx], a[2][col_idx], a[3][col_idx], a[4][col_idx], &row_idx);
        if (row_max == col_min)
        /*
        i = 我们当前在检查的行 → 永远正确
        row_idx = 列最小值所在的行 → 只有当列最小值就是鞍点本身时才等于 i
        */
        {
            printf("%d %d %d\n", i + 1, col_idx + 1, row_max);
            return 0;
        }
    }
    printf("not found\n");
    return 0;
}