#include <stdio.h>
#include <string.h>
int check(char str1[30], char str2[30], int len1, int len2)
{
    for (int i = 0; i <= len1 - len2; i++)
    {
        int found = 1;
        for (int j = 0; j < len2; j++)
        {
            if (str1[i + j] != str2[j])
            {
                found = 0;
                break;
            }
        }
        if (found)
            return 1;
    }
    return 0;
}
/*
i=0:  str1[0]='a' vs str2[0]='a'  ✓
      str1[1]='a' vs str2[1]='b'  ✗ → found=0, break

i=1:  str1[1]='a' vs str2[0]='a'  ✓
      str1[2]='b' vs str2[1]='b'  ✓
      str1[3]='a' vs str2[2]='c'  ✗ → found=0, break

i=2:  str1[2]='b' vs str2[0]='a'  ✗ → found=0, break

i=3:  str1[3]='a' vs str2[0]='a'  ✓
      str1[4]='b' vs str2[1]='b'  ✓
      str1[5]='c' vs str2[2]='c'  ✓ → found 保持 1
      → 返回 1（找到了）

## 核心思想
就是 把主串每个位置都当一次"起点" ，从这个起点开始尝试匹配整个子串。
只要有一个起点能完整匹配，就找到了；所有起点都试过还不行，就没找到。
时间复杂度是 O(n × m) ，但对于刷题的小规模数据完全够用，而且逻辑最简单，不容易出错
*/
int check_check(char str1[30], char str2[30], int len1, int len2)
{
    if (strstr(str1, str2) != NULL)
        return 1;
    return 0;
}
int main()
{
    int flag = 0;
    char str1[30];
    char str2[30];
    fgets(str1, 30, stdin);
    fgets(str2, 30, stdin);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 > 0 && str1[len1 - 1] == '\n'){
        str1[--len1] = '\0';//fgets 读取一行字符串时，会把末尾的换行符 \n 也读进去。
    }
    if (len2 > 0 && str2[len2 - 1] == '\n'){
        str2[--len2] = '\0';//fgets 读取一行字符串时，会把末尾的换行符 \n 也读进去。
    }
    if(len1<len2){
        char temp[30];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
        len1 = strlen(str1);
        len2 = strlen(str2);
        flag = 1 ;
    }
    if(check(str1,str2,len1,len2)){
        printf("%s is substring of %s\n",str2,str1);
    }
    else{
        printf("No substring\n");
    }
}