#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max_score = -1;
    char best_name[21];
    for (int i = 0; i < n; i++)
    {
        int score;
        char name[21];
        scanf("%d %s", &score, name);
        if (score > max_score)
        {
            max_score = score;
            int j;
            for (j = 0; name[j] != '\0'; j++){
                best_name[j] = name[j];
            }
            best_name[j] = '\0';
        }
    }
    printf("%s\n", best_name);
    return 0;
}