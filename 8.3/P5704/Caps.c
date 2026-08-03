#include <stdio.h>
int main(){
    char s;
    scanf("%c",&s);
    printf("%c",(char)(s-32));
    return 0;   
}
/*
🔴 问题：char(s-32) 是 C++ 写法，不是 C
第6行 ： printf("%c", char(s-32));
C 语言不支持函数式类型转换 char(...) ，必须写成强制类型转换 (char)(...) 。
*/