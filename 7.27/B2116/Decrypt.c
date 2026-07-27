#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    fgets(str, 50, stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n'){
        str[--len] = '\0';//fgets 读取一行字符串时，会把末尾的换行符 \n 也读进去。
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 'a' + 3) % 26 + 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }
    printf("%s\n", str);
    return 0;
}