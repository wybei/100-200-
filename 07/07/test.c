#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("�������n��������쳲�������Ϊ��\n");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));




//int my_pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n*my_pow(n, (k - 1));
//}
//int main()
//{
//	printf("����������������>");
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", my_pow(n, k));



//int digitsum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + digitsum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��������>");
//	scanf("%d", &n);
//	printf("���λ���ֺ�Ϊ��%d\n", digitsum(n));


//int my_strlen(const char *str)
//{
//	int i = 0;
//	while (*str++ != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//#include<assert.h>
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char str[] = "wang";
//	printf("���ַ����ĳ���Ϊ��%d", my_strlen(str));


//#include <assert.h>
//char *reverse_string(char *string)
//{
//	assert(string);
//	char *ret = string;
//	char *left=string;
//	char *right;
//	char temp;
//	while (*string != '\0')
//	{
//		string++;
//	}
//	right = string - 1;
//	while (left < right)
//	{
//		temp = *right;
//		*right = *left;
//		*left = temp;
//		left++;
//		right--;
//	}
//	return ret;
//}
//int main()
//{
//	char str[] = "yiyangqianxi";
//	reverse_string(str);
//	printf("\n");

//int factorial(n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
	//int sum = 1;
	//while (n > 1)
	//{
	//	sum *= n--;
	//}
	//return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��������>");
//	scanf("%d", &n);
//	printf("��׳�Ϊ��%d\n", factorial(n));

//int print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//		printf("%d ", a);
//}
//int main()
//{
//	int a = 0;
//	printf("������һ��������>");
//	scanf("%d", &a);
//	print(a);

//int print(int num)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������˷��ھ����������>");
//	scanf("%d", &n);
//	print(n);


//
//int my_swap(int *a, int *b)
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
//	printf("a=%d b=%d", a, b);


//int my_year(int n)
//{
//	if ((n % 4) == 0 && (n % 100) != 0 || (n % 400) == 0)
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
//	printf("��������ݣ�>");
//	scanf("%d", &input);
//	my_year(input);
//	if (my_year(input))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}



int su_print(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{ 
			break;
		}
	}
	if (i >= n)
		return 1;
	else
		return 0;
}
int main()
{
	int a = 0;
	printf("������һ��������>");
	scanf("%d", &a);
	su_print(a);
	if (su_print(a))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}