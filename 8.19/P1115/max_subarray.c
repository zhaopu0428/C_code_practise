#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[200005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // dp: 以当前位置结尾的最大子段和
    int dp = a[0];
    int ans = a[0];

    for (int i = 1; i < n; i++)
    {
        // 要么自己开一段，要么接在前面
        if (dp + a[i] > a[i])
            dp = dp + a[i];
        else
            dp = a[i];

        // 更新全局最大值
        if (dp > ans)
            ans = dp;
    }

    printf("%d\n", ans);
    return 0;
}
