#include <stdio.h>

int main()
{
    int w, x, h;
    scanf("%d %d %d", &w, &x, &h);

    int q;
    scanf("%d", &q);

    // removed[i][j][k] = 1 表示该小方块被切除了
    // 下标从 1 开始，方便与题目坐标对应
    int removed[21][21][21] = {0};

    for (int i = 0; i < q; i++)
    {
        int x1, y1, z1, x2, y2, z2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);

        // 把区域内的所有小方块标记为已切除
        for (int a = x1; a <= x2; a++)
            for (int b = y1; b <= y2; b++)
                for (int c = z1; c <= z2; c++)
                    removed[a][b][c] = 1;
    }

    // 统计剩余未被切除的小方块数量
    int ans = 0;
    for (int a = 1; a <= w; a++)
        for (int b = 1; b <= x; b++)
            for (int c = 1; c <= h; c++)
                if (!removed[a][b][c])
                    ans++;

    printf("%d\n", ans);
    return 0;
}
