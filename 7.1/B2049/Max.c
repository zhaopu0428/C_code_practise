#include <stdio.h>
long int Max(long int a, long int b, long int c);
int main(){
    long int a;
    long int b;
    long int c;
    scanf("%ld %ld %ld", &a, &b, &c);  
    printf("%ld", Max(a, b, c));
    return 0;
}
long int Max(long int a, long int b, long int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}