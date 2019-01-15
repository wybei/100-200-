#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int a = 0, b = 0;
int main()
{
	printf("请输入两个值：a b\n");
	scanf("%d %d", &a, &b);
	a = a^b,b = a^b,a = a^b;
	printf("a=%d,b=%d", a, b);
	system("pause");
	return 0;
}