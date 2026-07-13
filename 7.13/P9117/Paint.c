#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n, m, q;
        scanf("%d %d %d", &n, &m, &q);
        
        long long *row_color = (long long *)malloc((n + 1) * sizeof(long long));
        int *row_time = (int *)malloc((n + 1) * sizeof(int));
        long long *col_color = (long long *)malloc((m + 1) * sizeof(long long));
        int *col_time = (int *)malloc((m + 1) * sizeof(int));
        
        for (int i = 1; i <= n; i++)
        {
            row_color[i] = 0;
            row_time[i] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            col_color[i] = 0;
            col_time[i] = 0;
        }
        
        for (int t = 1; t <= q; t++)
        {
            int opt, x;
            long long c;
            scanf("%d %d %lld", &opt, &x, &c);
            if (opt == 0)
            {
                row_color[x] = c;
                row_time[x] = t;
            }
            else
            {
                col_color[x] = c;
                col_time[x] = t;
            }
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (row_time[i] > col_time[j])
                    printf("%lld ", row_color[i]);
                else
                    printf("%lld ", col_color[j]);
            }
            printf("\n");
        }
        
        free(row_color);
        free(row_time);
        free(col_color);
        free(col_time);
    }
    return 0;
}