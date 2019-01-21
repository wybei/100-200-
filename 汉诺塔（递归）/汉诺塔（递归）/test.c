#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char a, char b, char c,int *count)
{
	if (n >= 1)
	{   
		hanoi(n - 1, a, c, b, count);
		printf("%c-->%c\n", a, c);
		hanoi(n - 1, b, a, c, count);
		(*count)++;
	}
}
int main()
{
	int n = 0;
	int count = 0;
	printf("��������Ҫ�ƶ�����������>");
	scanf("%d", &n);
	hanoi(n , 'A', 'B', 'C',&count);
	printf("�ƶ�������%d\n", count);
	system("pause");
	return 0;
}