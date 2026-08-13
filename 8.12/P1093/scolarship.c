#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int score;
    int chinese;
    int math;
    int english;
}stu[301];

// qsort 比较函数：返回负数 a 排前，正数 b 排前
int cmp(const void* p1, const void* p2)
{
    struct student* a = (struct student*)p1;
    struct student* b = (struct student*)p2;
    if (a->score != b->score) 
    {
        return b->score - a->score;// 总分降序
        /*  举例：a=200 分，b=250 分（b 比 a 大，所以 b 想排前面）
            - 250 - 200 = 50 （正数）→ 正数表示 b 排前面 ✅
            再例：a=250 分，b=200 分（a 比 b 大，a 排前面）
            - 200 - 250 = -50 （负数）→ 负数表示 a 排前面 ✅
        */
    }
    if (a->chinese != b->chinese) 
    {
        return b->chinese - a->chinese;// 语文降序
        //- 你让 a 大时返回正 → 大的会被推到后面 → 升序
        //- 你让 a 大时返回负 → 大的会被推到前面 → 降序
    }
    return a->id - b->id;// 学号升序
    //一句话 ： . 操作结构体变量本身， -> 操作 结构体指针 。
}
/*
## 一句话口诀 降序 b - a ，升序 a - b
想让谁排前面，就让" 对方 - 自己 "是负数（让自己当被减数）。
*/
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        stu[i].id = i;
        scanf("%d %d %d", &stu[i].chinese, &stu[i].math, &stu[i].english);
        stu[i].score = stu[i].chinese + stu[i].math + stu[i].english;
    }

    // 排序：从 stu[1] 开始排 n 个元素
    qsort(stu + 1, n, sizeof(struct student), cmp);
    /*
    stu + 1 起始地址 （从 stu[1] 开始排） 
    n 元素个数 （排 n 个学生） 
    sizeof(struct student) 每个元素的大小 （字节） 
    cmp 比较函数 （刚才写的那个）
    */

    // 输出前 5 名（不足 5 人时全输出）
    //int top = n < 5 ? n : 5;
    for (int i = 1; i <= 5; i++) {
        printf("%d %d\n", stu[i].id, stu[i].score);
    }
    return 0;
}
