#include <stdio.h>
int main(){
    long int a, b ,c;
    scanf("%ld %ld %ld", &a, &b, &c);  
    if(a + b > c && a + c > b && b + c > a)
        printf("1");
    else
        printf("0");
    return 0;
}