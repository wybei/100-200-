#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()

{
	int a, b;
	printf("�����������������Լ����");
	scanf("%d%d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("���Լ��Ϊ��%d\n", a);
	system("pause");
	return 0;
}