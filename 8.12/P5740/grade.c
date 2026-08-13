#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[9];
    int score[3];
    int sum;
    int id;              // 记录原始输入顺序
};
struct student stu[1001];

// 先按总分降序，并列按输入顺序升序
int cmp(const void *p1, const void *p2)
{
    struct student *a = (struct student*)p1;
    struct student *b = (struct student*)p2;
    if (a->sum != b->sum) return b->sum - a->sum;   // 总分降序
    return a->id - b->id;                           // 并列时原顺序升序
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s %d %d %d", stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
        stu[i].id = i;
    }

    qsort(stu + 1, n, sizeof(stu[0]), cmp);

    // 输出第一名：姓名 + 三科成绩，不含总分
    printf("%s %d %d %d\n", stu[1].name, stu[1].score[0], stu[1].score[1], stu[1].score[2]);
    return 0;
}
