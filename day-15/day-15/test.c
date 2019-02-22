#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


////1.一个数组中只有两个数字是出现一次，
////其他所有数字都出现了两次。
////找出这两个数字，编程实现
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





////2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
////给20元，可以多少汽水。
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
//	printf("可以喝%d瓶汽水\n", ret);
//	system("pause");
//	return 0;
//}





////模拟实现strcpy
//#include<assert.h>
//char* my_strcpy(char*dest, const char*cpy)
//{
//	assert(dest);
//	assert(cpy);
//	char*str = dest;//赋值 拷入'\0'
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





//模拟实现strcat
#include<assert.h>
char* my_strcat(char*dest, char*src)
{
	assert(dest);
	assert(src);
	char*str = dest;//赋值 拷入'\0'
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
