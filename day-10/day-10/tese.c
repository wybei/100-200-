#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//дһ���������ز����������� 1 �ĸ���
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
//	printf("������һ����:");
//	scanf("%d", &value);
//	printf("������������ 1 �ĸ���Ϊ��%d\n", count_one_bits(value));
//	system("pause");
//	return 0;
//}




//��ȡһ�������������������е�ż��λ������λ
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
//	printf("�������У�\n");
//	for (i = count; i >= 0; i -= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	printf("ż�����У�\n");
//	for (i = count - 1; i >= 0; i -= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��ʮ��������");
//	scanf("%d", &n);
//	print_num(n);
//	system("pause");
//	return 0;
//}




//���һ��������ÿһλ
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
//	printf("������һ��������");
//	scanf("%d", &num);
//	print(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}




//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ?
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int count = 0;
	int c[32] = { 0 };
	int d[32] = { 0 };
	printf("������һ��������");
	scanf("%d", &a);
	printf("��������һ��������");
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
	printf("��%d��bitλ��ͬ\n", count);
	system("pause");
	return 0;
}

