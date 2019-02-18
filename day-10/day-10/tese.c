#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//写一个函数返回参数二进制中 1 的个数
//count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((value >> i) & 0x1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int value = 0;
//	printf("请输入一个数:");
//	scanf("%d", &value);
//	printf("参数二进制中 1 的个数为：%d\n", count_one_bits(value));
//	system("pause");
//	return 0;
//}




//获取一个数二进制序列中所有的偶数位和奇数位
//void print_num(n)
//{
//	int arr[32] = { 0 };
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		arr[i++] = n % 2;
//		n /= 2;
//		count++;
//	}
//	printf("奇数序列：\n");
//	for (i = count; i >= 0; i -= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	printf("偶数序列：\n");
//	for (i = count - 1; i >= 0; i -= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个十进制数：");
//	scanf("%d", &n);
//	print_num(n);
//	system("pause");
//	return 0;
//}




//输出一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	print(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}




//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同?
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int count = 0;
	int c[32] = { 0 };
	int d[32] = { 0 };
	printf("请输入一个整数：");
	scanf("%d", &a);
	printf("请输入另一个整数：");
	scanf("%d", &b);
	for (i = 0; i < 32;i++)
	{
		c[i] = a % 2;
		a /= 2;
		d[i] = b % 2;
		b /= 2;
	}
	for (i = 0; i < 32; i++)
	{
		if (c[i] != d[i])
		{
			count++;
		}
	}
	printf("有%d个bit位不同\n", count);
	system("pause");
	return 0;
}

