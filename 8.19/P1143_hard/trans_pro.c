#include <stdio.h>

int n, m;

// 字符 → 数字（0~15）
int char_to_val(char c)
{
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= '0' && c <= '9') return c - '0';
    return -1;
}

// 数字 → 字符（0~15 → '0'~'9', 'A'~'F'）
char val_to_char(int x)
{
    if (x < 10) return x + '0';
    return x - 10 + 'A';
}

// 读取 n 进制数，转为十进制
long long read_decimal()
{
    char s[20];
    scanf("%s", s);
    long long val = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        val = val * n + char_to_val(s[i]);
        //每读一位，就把前面的所有值"左移一位"（乘以 n），再加上当前位的数字。
    }
    return val;
}


// 递归输出：十进制 → m 进制
void write_base(long long k)
{
    if (k == 0) return;
    write_base(k / m);
    putchar(val_to_char(k % m));
}

int main()
{
    // 读入源进制 n
    scanf("%d", &n);
    // 读入 n 进制数，转为十进制
    long long decimal = read_decimal();
    // 读入目标进制 m
    scanf("%d", &m);
    // 输出 m 进制
    if (decimal == 0) putchar('0');
    else write_base(decimal);
    putchar('\n');
    return 0;
}
