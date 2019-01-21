#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int fib(int n)
//{
////递归
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}



//int fib(int n)
//{
//////非递归
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//             return c;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入第n个数，其斐波那契数为：\n");
//	scanf("%d", &n);
//	printf("%d", fib(n));




//int my_pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n*my_pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", my_pow(n, k));



//int digitsum(int n)
//{
//	if (n <= 10)
//	return n;
//	else 
//	return n % 10 + digitsum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &n);
//	printf("各位数之和为：%d\n", digitsum(n));




//int reverse_string(char*p)
//{
//	int n = 0;
//	char temp = 0;
//	char *q = 0;
//	q = p;
//	while (*p != 0)
//	{
//		n++;
//		p++;
//	}
//	if (n > 1)
//	{
//		temp = q[0];
//		q[0] = q[n - 1];
//		q[n - 1] = '\0';
//		reverse_string(q + 1);
//		q[n - 1] = temp;
//	}
//	return q;
//}
//int main()
//{
//	char p[] = "wangyibei";
//	printf("原字符串为：%s\n", p);
//	printf("翻转后的字符串为：%s\n", reverse_string(p));



//int my_strlen( const char *string)
//{
//	int i = 0;
//	while (*string++ != '\0')
//	{
//		i++;
//	}
//	return i;
//
//}

//#include<assert.h>
//int  my_strlen(const char *string)
//{
//	assert(string != NULL);
//	if (*string == '\0')
//	return 0;
//	else 
//	return 1 + my_strlen(string+1);
//}
//int main()
//{
//	char *str= "wangyibei";
//	printf("字符串的长度为：%d\n", my_strlen(str));





//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}


//int factorial(int n)
//{
//	int sum = 1;
//	while (n > 1)
//	{
//		sum *=n--;
//	}
//	return sum ;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &n);
//	printf("其阶乘为：%d\n", factorial(n));






void print(int a)
{
	if (a > 9)
	{
		print(a / 10);
		printf("%d ", a % 10);
	}
	else
		printf("%d ", a);
}
int main()
{
	int a = 0;
	printf("请输入一个整数：>");
	scanf("%d", &a);
	print(a);
	printf("\n");
	system("pause");
	return 0;
}
