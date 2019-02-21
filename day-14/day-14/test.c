#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>




//1.实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include<string.h>
//void left_move(char arr[], int k, int len)
//{
//	while (k--)
//	{
//		int i = 0;
//		char temp = arr[0];
//		for ( i = 0; i <len ; i++)
//		{
//			arr[i] = arr[i+1];
//		}
//		arr[len-1] = temp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDE";
//	int k = 0;
//	int len = strlen(arr);
//	printf("请输入数字：");
//	scanf("%d", &k);
//	left_move(arr, k,len);
//	printf("左旋后为%s\n", arr);
//	system("pause");
//	return 0;
//}





//判断一个字符串是否为另外一个字符串旋转之后的字符串

#include <string.h>
#define NUM 8
int Is_revolve(char *arr3, char *arr2)
{
	if (strstr(arr3, arr2))//若arr2是arr3的子串，则返回arr2在arr3的首次出现的地址；如果arr2不是arr3的子串，则返回NULL。
		return 1;
	else
		return 0;
}
int main()
{
	int ret = 0;
	char arr1[NUM];
	char arr2[NUM];
	char arr3[NUM + NUM ];//存放arr1的值两次的一个数组
	printf("arr1:\n");//输入arr1
	scanf("%s", arr1);
	printf("arr2:\n");//输入arr2
	scanf("%s", arr2);
	strcpy(arr3, arr1);//把arr1的值先赋给arr3
	strcat(arr3, arr1);//把arr1的值在接在arr1原来的值的后边
	ret = Is_revolve(arr3, arr2);
	if (ret == 1)
	{
		printf("arr1是arr2旋转得到的!\n");
	}
	else
	{
		printf("arr1不是arr2通过旋转得到的\n");
	}
	system("pause");
	return 0;
}
