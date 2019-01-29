#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i <= 6; i++)
//	{
//		for (j = 0; j <= 5-i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 2*i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 10 - 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}


//int main()
//{
//	int i = 0;
//	int j = 0; 
//	int k = 0;
//	int n = 100;
//	printf("水仙花数:\n", n);
//	for (n = 100; n < 1000;n++)
//	{
//		i = n / 100;
//		j = n / 10 - 10 * i;
//		k = n % 10;
//		if (i*i*i + j*j*j + k*k*k == n)
//			printf("%d\n", n);
//	}


int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		a = n + a * 10;
		sum += a;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
