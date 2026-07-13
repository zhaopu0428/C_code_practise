#include <stdio.h>
#include <math.h>
int Prime(int n)
{
    if(n == 1){
        printf("2");
        return 0;
    }
    if(n == 2){
        printf("3");
        return 0;
    }
    int cnt = 2;
    for(long long i = 4;; i++)
    {
        int flag = 1;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            cnt++;
        }
        if(cnt == n)
        {
            printf("%lld", i);
            break;
        }
        
    }
    return cnt;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    Prime(n);
    return 0;
}