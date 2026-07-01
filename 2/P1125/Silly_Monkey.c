#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int a[26] = {0};
	int max = 0, min = 100;
	int zhishu[25] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 };
	char s[101];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0;i <= len;i++)
	{
		int x = s[i]-'a';
		a[x] += 1;
	}
	for (int i = 0;i < 26;i++)
	{
		if (a[i] < min && a[i] != 0) 
		{
			min = a[i];
		}
	}
	for (int i = 0;i < 26;i++)
	{
		if (a[i] > max && a[i] != 0)
		{
			max = a[i];
		}
	}
	int x = max - min;
	for (int i = 0;i < 25;i++) {
		if (x == zhishu[i])
		{
			printf("Lucky Word\n");
			printf("%d", x);
			return 0;
		}
	}
	printf("No Answer\n");
	printf("0");
	return 0;
}