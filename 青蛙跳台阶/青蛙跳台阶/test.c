#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int jump_floor(int n)
{
	if (n < 3)
		return n;
	else
		return jump_floor(n - 1) + jump_floor(n - 2);
}
int main()
{
	int n = 0;
	printf("ÇëÊäÈëÌ¨½×Êý£º>");
	scanf("%d", &n);
	int ret = jump_floor(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}