#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void print(int num)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);
//		printf("\n");
//	}
//}
//int main()
//{
//	int s = 0;
//	printf("请输入乘法表的行数：>");
//	scanf("%d", &s);
//	print(s);



//void my_swap(int*a, int*b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	my_swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);



//int my_YEAR(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("请输入年份：>");
//	scanf("%d", &input);
//	my_YEAR(input);
//	if (my_YEAR(input))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}



//void init(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//}
//void empty(int arr[10],int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[10]));
//}
//void reverse(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr);
//	empty(arr, sz);
//	reverse(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}

//void su_print(int n)
//{
//	int i = 0;
//	for (i = 2; i <n; i++)
//	{
//		if (n%i == 0)
//		{
//			break;
//		}
//	}
//	if (i >= n)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("请输入一个数：>");
//	scanf("%d", &input);
//	su_print(input);



void init(int arr[10])               //初始化数组
{
	int j = 0;
	for (j = 0; j <= 9; j++)
	{
		arr[j] = j;
	}
}
void empty(int arr[10], int SZ)             //清空数组
{
	memset(arr, 0, SZ*sizeof(arr[0]));
}
void reverse(int arr[10], int SZ)           //逆置数组元素
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < SZ / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[SZ - 1 - i];
		arr[SZ - 1 - i] = temp;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 6, 5, 4, 2 };
	int SZ = sizeof(arr) / sizeof(arr[0]);
	empty(arr, SZ);                  //清空数组
	init(arr);                       //初始化数组
	reverse(arr, SZ);                 //数组元素逆置
	int i = 0;
	system("pause");
	return 0;
}