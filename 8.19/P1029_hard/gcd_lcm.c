#include <stdio.h>

int main()
{
    int x0, y0;
    scanf("%d %d", &x0, &y0);

    // 如果 y0 不能被 x0 整除，无解
    if (y0 % x0 != 0)
    {
        printf("0\n");
        return 0;
    }

    int k = y0 / x0;
    int omega = 0;              // k 的不同质因子个数

    // 分解 k 的质因子
    for (int i = 2; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            omega++;            // i 是一个新的质因子
            while (k % i == 0)  // 把 i 全部约掉
                k /= i;
        }
    }
    if (k > 1) omega++;          // 剩下的 k 本身也是一个质因子

    // 答案 = 2^omega
    int ans = 1;
    for (int i = 0; i < omega; i++)
        ans *= 2;

    printf("%d\n", ans);
    return 0;
}
/*
## P1029 核心思路：从 GCD 和 LCM 的关系入手
### 关键数学关系
设 gcd(P, Q) = x0 ， lcm(P, Q) = y0

令 P = x0 × a ， Q = x0 × b （因为 x0 是最大公约数），则：

- gcd(a, b) = 1 （a 和 b 必须互质）
- lcm(P, Q) = x0 × a × b = y0
- 所以 a × b = y0 / x0
令 k = y0 / x0 ，问题转化为：
求满足 a × b = k 且 gcd(a, b) = 1 的有序对 (a, b) 的数量


## 互质因子分解的关键结论
如果 a × b = k 且 gcd(a, b) = 1 ，那么 a 和 b 的 质因子集合不相交 ——每个质因子只能全部分配给 a 或全部分配给 b。

结论 ：答案 = 2^ω ，其中 ω 是 k 的 不同质因子个数

### 验证样例
x0=3, y0=60 ， k = 60/3 = 20

分解 20 = 2² × 5¹，不同质因子 = {2, 5}，ω = 2

答案 = 2² = 4 ✅
*/