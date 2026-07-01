#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[55];

    scanf("%d", &n);
    scanf("%s", s);

    // 用size_t接收strlen返回值消除警告
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i++) {
        // 强制转换为char消除赋值类型警告
        s[i] = (char)((s[i] - 'a' + n) % 26 + 'a');
    }

    printf("%s\n", s);
    return 0;
}