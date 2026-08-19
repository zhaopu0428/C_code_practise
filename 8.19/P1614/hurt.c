#include <stdio.h>
int main()
{
    int n, m;
    int a[3001];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int min = 0;
    int key = 0;
    for (int i = 0; i < m; i++){
        min += a[i];
    }
    int ans = min;
    for (int i = m; i < n; i++){
        ans = ans - a[i-m] + a[i];
        if (ans < min){
            min = ans;
            key = i-m+1;
        }
    }
    printf("%d", min);
    return 0;
}