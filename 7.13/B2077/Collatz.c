#include <stdio.h>
void Collatz(long long n){//long long 防止溢出
    if (n == 1)//递归出口,放在前面，防止无限递归，走else
        return;
    if (n % 2 == 0){
        printf("%lld/2=%lld\n", n, n / 2);
        Collatz(n / 2);
    }
    else{
        printf("%lld*3+1=%lld\n", n, n * 3 + 1);
        Collatz(n * 3 + 1);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    Collatz(n);
    printf("End\n");
    return 0;
}