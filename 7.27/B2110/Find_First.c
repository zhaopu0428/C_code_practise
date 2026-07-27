#include <stdio.h>
int main()
{
    char str[1100];
    fgets(str, 1100, stdin);
    int a[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            a[str[i] - 'a']++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && a[str[i] - 'a'] == 1)
        {
            printf("%c\n", str[i]);
            return 0;
        }
    }
    printf("no\n");
    return 0;
}