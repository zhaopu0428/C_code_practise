// 求N的阶乘
#include <stdio.h>
int function(int n){
    if(n == 0){
        return 1;
    }
    return n * function(n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", function(n));
    return 0;
}