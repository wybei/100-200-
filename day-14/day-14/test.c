#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>




//1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//	printf("���������֣�");
//	scanf("%d", &k);
//	left_move(arr, k,len);
//	printf("������Ϊ%s\n", arr);
//	system("pause");
//	return 0;
//}





//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���

#include <string.h>
#define NUM 8
int Is_revolve(char *arr3, char *arr2)
{
	if (strstr(arr3, arr2))//��arr2��arr3���Ӵ����򷵻�arr2��arr3���״γ��ֵĵ�ַ�����arr2����arr3���Ӵ����򷵻�NULL��
		return 1;
	else
		return 0;
}
int main()
{
	int ret = 0;
	char arr1[NUM];
	char arr2[NUM];
	char arr3[NUM + NUM ];//���arr1��ֵ���ε�һ������
	printf("arr1:\n");//����arr1
	scanf("%s", arr1);
	printf("arr2:\n");//����arr2
	scanf("%s", arr2);
	strcpy(arr3, arr1);//��arr1��ֵ�ȸ���arr3
	strcat(arr3, arr1);//��arr1��ֵ�ڽ���arr1ԭ����ֵ�ĺ��
	ret = Is_revolve(arr3, arr2);
	if (ret == 1)
	{
		printf("arr1��arr2��ת�õ���!\n");
	}
	else
	{
		printf("arr1����arr2ͨ����ת�õ���\n");
	}
	system("pause");
	return 0;
}
