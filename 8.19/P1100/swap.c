#include <stdio.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);

    unsigned int low = n << 16;      // 取出低 16 位
    unsigned int high = n >> 16;        // 取出高 16 位
    unsigned int result = low + high;  // 交换合并

    printf("%u\n", result);
    return 0;
}
