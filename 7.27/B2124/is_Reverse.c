#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str, 1000, stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n'){
        str[--len] = '\0';//fgets 读取一行字符串时，会把末尾的换行符 \n 也读进去。
    }
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            printf("no");
            return 0;
        }
        i++;
        j--;
    }
    printf("yes");
    return 0;
}