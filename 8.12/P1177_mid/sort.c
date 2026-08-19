#include <stdio.h>
#include <stdlib.h>

// 升序比较函数（long long 不能用减法，避免溢出）
int cmp(const void* p1, const void* p2)
{
    long long* a = (long long*)p1;
    long long* b = (long long*)p2;
    return (*a > *b) - (*a < *b);   // a>b 返回正(b前)，a<b 返回负(a前) → 升序
    //- 你让 a 大时返回正 → 大的会被推到后面 → 升序
    //- 你让 a 大时返回负 → 大的会被推到前面 → 降序
}

/*
// 写法 1：三态表达式（紧凑）
return (*a > *b) - (*a < *b);

// 写法 2：if-else（直白）
if (*a > *b) return 1;
if (*a < *b) return -1;
return 0;

// 写法 3：三元运算符
return *a > *b ? 1 : (*a < *b ? -1 : 0);
*/

int main()
{
    long long n;
    scanf("%lld", &n);
    long long a[100001];
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }

    qsort(a + 1, n, sizeof(a[1]), cmp);   // 第4个参数传函数名 cmp
    

    for (int i = 1; i <= n; i++)
    {
        printf("%lld ", a[i]);             // 别忘了 %
    }
    return 0;
}
