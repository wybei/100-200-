#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


////��д������ 
////unsigned int reverse_bit(unsigned int value);
////��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ
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
//	printf("������һ������");
//	scanf("%d", &value);
//	num = reverse_bit(value);
//	printf("��ת��Ϊ��%u\n", num);
//	system("pause");
//	return 0;
//}





////��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int avg = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	avg = (a + b) >> 1;
//	printf("ƽ��ֵΪ��%d\n", avg);
//	return 0;
//	system("pause");
//}



////һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
////���ҳ�������֡���ʹ��λ���㣩
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
//	printf("ֻ�� %d ������һ��\n", arr[0]);
//	system("pause");
//	return 0;
//}



//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
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
void reverse(char arr[], int left, int right)//������
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
char* reverse_string(char arr[])//�����ַ���
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


