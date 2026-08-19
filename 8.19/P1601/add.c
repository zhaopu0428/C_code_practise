#include <stdio.h>
#include <string.h>

#define MAXN 4005

int a[MAXN], b[MAXN], ans[MAXN];
char sa[MAXN], sb[MAXN];

int main()
{
    // 读入两个大整数（用字符串）
    scanf("%s%s", sa, sb);
    int la = strlen(sa), lb = strlen(sb);

    // 反转并存入数组：a[0] 存个位，a[la-1] 存最高位
    for (int i = 0; i < la; i++)
        a[i] = sa[la - 1 - i] - '0';
    for (int i = 0; i < lb; i++)
        b[i] = sb[lb - 1 - i] - '0';

    // 逐位相加：a[i] + b[j] 累加到 ans[i]
    int maxLen = la + lb - 1;
    for (int i = 0; i < maxLen; i++)
        ans[i] += a[i] + b[i];

    // 处理进位
    for (int i = 0; i < maxLen; i++)
    {
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
    }

    // 跳过前导零，输出结果（从高位到低位）
    int i = maxLen;
    while (i > 0 && ans[i] == 0) i--;
    for (; i >= 0; i--)
        printf("%d", ans[i]);
    printf("\n");

    return 0;
}
