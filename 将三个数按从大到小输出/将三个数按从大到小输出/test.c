#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[3];
	int i = 0;
	int j = 0;
	int a = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3 - j; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;
			}
		}
	}
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
