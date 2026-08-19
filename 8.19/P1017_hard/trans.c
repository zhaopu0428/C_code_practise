#include <stdio.h>

// 递归实现进制转换（支持负基数）
void zhuan(int n, int r)
{
    if (n == 0) return;
    int m = n % r;              // C 的 % 可能得到负余数

    if (m < 0){
        m -= r, n += r;  // 负余数修正：借 1 给商，让余数变正
    }
    // 余数转 ASCII：10~15 → A~F，0~9 → '0'~'9'
    char c;
    if (m >= 10) c = 'A' + m - 10;
    else c = m + '0';

    zhuan(n / r, r);            // 先递归处理高位
    printf("%c", c);            // 返回时输出当前位（自然倒序）
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d=", n);
    if (n == 0) printf("0");    // 特判 0
    else zhuan(n, r);
    printf("(base%d)", r);
    return 0;
}
