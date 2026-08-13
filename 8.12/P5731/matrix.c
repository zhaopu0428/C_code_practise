#include <stdio.h>

int a[15][15];   // n ≤ 9，够用

int main()
{
    int n;
    scanf("%d", &n);

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    //右\下\左\上

    int r = 0, c = 0;      // 当前位置
    int dir = 0;            // 当前方向
    int x = 1;              // 要填的数字

    for (int i = 0; i < n * n; i++)
    {
        a[r][c] = x++;     // 填入

        // 预走一步
        int nr = r + dx[dir];
        int nc = c + dy[dir];

        // 越界或已填 → 转弯
        if (nr < 0 || nr >= n || nc < 0 || nc >= n || a[nr][nc] != 0)
        {
            dir = (dir + 1) % 4;
            nr = r + dx[dir];   // 重新算
            nc = c + dy[dir];
        }

        r = nr;
        c = nc;// 更新当前位置,下次循环时代入下一个数字
    }

    // 输出
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);   // 占3格，前补空格
        }
        printf("\n");
    }
    return 0;
}