#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[200005];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int x = a[0];
    int ans = a[0];
    for (int i = 1; i < n; i++){
        if(x + a[i] > a[i]){
            x = x + a[i];
        }
        else{
            x = a[i];
        }
        if(x > ans){
            ans = x;
        }
    }
    printf("%d\n", ans);
    return 0;
}