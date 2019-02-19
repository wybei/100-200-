#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


////编写函数： 
////unsigned int reverse_bit(unsigned int value);
////这个函数的返回值value的二进制位模式从左到右翻转后的值
//
//#include<math.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int num = 0;
//	for (i = 0; i < 32; i++)
//	{
//		num += ((value >> i) & 1) * pow(2, 31 - i);
//	}
//	return num;
//}
//int main()
//{
//	int value = 0;
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &value);
//	num = reverse_bit(value);
//	printf("翻转后为：%u\n", num);
//	system("pause");
//	return 0;
//}





////不使用（a + b） / 2这种方式，求两个数的平均值
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int avg = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	avg = (a + b) >> 1;
//	printf("平均值为：%d\n", avg);
//	return 0;
//	system("pause");
//}



////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
////请找出这个数字。（使用位运算）
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 4, 3, 5, 1, 4 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("只有 %d 出现了一次\n", arr[0]);
//	system("pause");
//	return 0;
//}



//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
#include<assert.h>
int my_strlen(const char*str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char arr[], int left, int right)//逆序函数
{
	while (left < right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
char* reverse_string(char arr[])//逆序字符串
{
	int i = 0;
	int left = 0;
	int right = my_strlen(arr) - 1;
	reverse(arr, left, right);
	while (arr[i] != '\0')
	{
		left = i;
		while ((arr[i] != '\0') && (arr[i] != ' '))
		{
			i++;
		}
		right = i - 1;
		reverse(arr, left, right);
		if (arr[i] != '\0')
		{
			i++;
		}

	}
	return arr;

}
int main()
{
	char arr[] = "student a am i";
	reverse_string(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;
}


