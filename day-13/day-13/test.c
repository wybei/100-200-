#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


////��������ʹ����ȫ����λ��ż��ǰ�档
//void adjust(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//����߿�ʼ�ҵ�һ��ż��
//		while ((left < right) && ((arr[left] % 2) != 0))
//		{
//			left++;
//		}
//		//���ұ߿�ʼ�ҵ�һ������
//		while ((left < right) && ((arr[right] % 2) == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	adjust(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


////
////���Ͼ��� 
////��һ����ά����.
////�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
////�������������в���һ�������Ƿ���ڡ�
////ʱ�临�Ӷ�С��O(N);
int search(int arr[3][4], int *x, int *y, int key)
{
	int row = 0;
	int col = *y - 1;
	while ((row <= *x - 1) && (col) >= 0)
	{
		if (arr[row][col] > key)
		{
			col--;
		}
		else if (arr[row][col] < key)
		{
			row++;
		}
		else
		{
			*x = row + 1;
			*y = col + 1;
			return 1;
		}
	}
		return 0;
}
int main()
{
	int arr[3][4] = { { 1, 2, 3, 4 },
	                 { 5, 6, 7, 8 }, 
	                 { 9,10,11,12 } };
	int key = 0;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &key);
	int x = sizeof(arr) / sizeof(arr[0]);//����
	int y = sizeof(arr[0]) / sizeof(arr[0][0]);//����
    int find=search(arr, &x, &y, key);
	if (find)
	{
		printf("�ҵ���%d,%d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return 0;
}
