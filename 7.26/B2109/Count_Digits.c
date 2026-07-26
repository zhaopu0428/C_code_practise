#include <stdio.h>
int main()
{
    char str[256];
    fgets(str, 256, stdin);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            count++;
    }
    printf("%d", count);
    return 0;
}
/*
## 为什么不用 scanf("%s", str)？
因为 scanf("%s") 遇到 空格就会停下来 。
比如输入 Today is 2021 ， scanf 只会读到 Today ，后面的 is 2021 就丢了。
而 fgets 会一直读到 换行符 为止（或者读满 255 个字符），中间的空格不会中断。
*/