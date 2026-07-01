#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 加 const 修饰！
const char* words[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
};

const char* special[] = { "a", "both", "another", "first", "second", "third" };
int special_val[] = { 1, 2, 1, 1, 2, 3 };

int cmp(const char* a, const char* b) {
    char s1[10], s2[10];
    sprintf(s1, "%s%s", a, b);
    sprintf(s2, "%s%s", b, a);
    return strcmp(s1, s2);
}

int main() {
    char input[1010];
    char tokens[10][50];  // 存储分割后的单词
    int token_count = 0;

    // 读取整行
    fgets(input, sizeof(input), stdin);

    // 分割单词（按空格）
    char* p = strtok(input, " \n");
    while (p != NULL && token_count < 10) {
        strcpy(tokens[token_count++], p);
        p = strtok(NULL, " \n");
    }

    char nums[10][5];  // 存储转换后的两位数字符串
    int num_count = 0;

    // 遍历每个单词，识别数字
    for (int i = 0; i < token_count; i++) {
        int val = -1;

        // 检查正规数字 0-20
        for (int j = 0; j <= 20; j++) {
            if (strcmp(tokens[i], words[j]) == 0) {
                val = j;
                break;
            }
        }

        // 检查非正规数字
        if (val == -1) {
            for (int j = 0; j < 6; j++) {
                if (strcmp(tokens[i], special[j]) == 0) {
                    val = special_val[j];
                    break;
                }
            }
        }

        // 找到数字，转换并存储
        if (val != -1) {
            int squared = (val * val) % 100;
            sprintf(nums[num_count], "%02d", squared);  // 格式化为两位数
            num_count++;
        }
    }

    // 如果没有数字，输出 0
    if (num_count == 0) {
        printf("0\n");
        return 0;
    }

    // 按拼接后最小排序（冒泡排序）
    for (int i = 0; i < num_count - 1; i++) {
        for (int j = i + 1; j < num_count; j++) {
            if (cmp(nums[i], nums[j]) > 0) {
                char tmp[5];
                strcpy(tmp, nums[i]);
                strcpy(nums[i], nums[j]);
                strcpy(nums[j], tmp);
            }
        }
    }

    // 拼接结果
    char result[100] = "";
    for (int i = 0; i < num_count; i++) {
        strcat(result, nums[i]);
    }

    // 去掉前导零
    int start = 0;
    while (result[start] == '0' && result[start + 1] != '\0') {
        start++;
    }

    printf("%s\n", result + start);
    return 0;
}