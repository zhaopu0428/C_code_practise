#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    // 找最小的质因子
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d\n", n / i);
            return 0;
        }
    }
    return 0;
}