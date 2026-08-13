#include <stdio.h>

int a[2000005];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    while (m--) {
        int x;
        scanf("%d", &x);

        // 二分查找 x 第一次出现的位置
        int left = 1, right = n + 1;   // 左闭右开区间 [1, n+1)
        while (left < right) {
            int mid = (left + right) / 2;
            if (a[mid] < x) {
                left = mid + 1;        // mid 太小，往右找
            } else {
                right = mid;           // a[mid] >= x，往左收缩（保留 mid）
            }
            //普通二分 ：找到就停 → 返回 任意一个 x 的位置 
            // 这个版本（lower_bound 思想） ：找到不停，继续左挤 → 返回 第一个 x 的位置
        }
        // 循环结束时 left == right，是第一个 >= x 的位置
        if (left <= n && a[left] == x) {
            printf("%d ", left);       // 找到
        } else {
            printf("-1 ");            // 没找到
        }
    }
    return 0;
}