#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    fgets(str, 1000, stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n'){
        str[--len] = '\0';//fgets 读取一行字符串时，会把末尾的换行符 \n 也读进去。
    }
    int word_len = 0;
    int count[300] = {0};
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] != ' ')
        {
            word_len++;
        }
        if(str[i] == ' ')
        {
            for (int j = 0; j < word_len; j++)
            {
                printf("%c",str[i - j - 1]);
            }
            printf("\n");
            word_len = 0;
        }
        if(i == len - 1)
        {
            for (int j = 0; j < word_len; j++)
            {
                printf("%c",str[i - j]);
            }
            printf("\n");
        }
    }
    return 0;
}