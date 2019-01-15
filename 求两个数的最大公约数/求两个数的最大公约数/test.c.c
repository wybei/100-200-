#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()

{
	int a, b;
	printf("输入两个数字求最大公约数：");
	scanf("%d%d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("最大公约数为：%d\n", a);
	system("pause");
	return 0;
}