#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	int i = 0;
	int MAX = 0;
	int arr[10] = { 0 };
	printf("����������10��������\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < 10; i++)
		MAX = arr[0];
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	printf("������Ϊ��%d", MAX);
	system("pause");
	return 0;
}