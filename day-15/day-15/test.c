#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


////1.һ��������ֻ�����������ǳ���һ�Σ�
////�����������ֶ����������Ρ�
////�ҳ����������֣����ʵ��
//void search(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		for (j = 0; j < sz; j++)
//		{
//			if ((i != j) && (arr[j] == tmp))
//			{
//				break;
//			}
//		}
//		if (j == sz)
//		{
//			printf("%d\n",tmp);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 2, 4, 5, 5, 7, 7, 9, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	search(arr, sz);
//	system("pause");
//	return 0;
//}





////2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
////��20Ԫ�����Զ�����ˮ��
//
//int DrinkNum(int n)
//{
//	int count = n;
//	while (n > 1)
//	{
//		count += n / 2;
//		n = n / 2 + n % 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 5;
//	int ret = DrinkNum(n);
//	printf("���Ժ�%dƿ��ˮ\n", ret);
//	system("pause");
//	return 0;
//}





////ģ��ʵ��strcpy
//#include<assert.h>
//char* my_strcpy(char*dest, const char*cpy)
//{
//	assert(dest);
//	assert(cpy);
//	char*str = dest;//��ֵ ����'\0'
//	while (*dest++ = *cpy++)
//	{
//		;
//	}
//	return str;
//}
//int main()
//{
//	char* arr = "abcdef";
//	char arr1[] = { 0 };
//	char* str1 = my_strcpy(arr1, arr);
//	printf("%s\n", str1);
//	system("pause");
//	return 0;
//}





//ģ��ʵ��strcat
#include<assert.h>
char* my_strcat(char*dest, char*src)
{
	assert(dest);
	assert(src);
	char*str = dest;//��ֵ ����'\0'
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return str;
}
int main()
{
	char arr1[15] = "abcdef";
	char* arr2 = "ghjkl";
	char* str1 = my_strcat(arr1, arr2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
