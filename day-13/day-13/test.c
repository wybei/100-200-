#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


////调整数组使奇数全部都位于偶数前面。
//void adjust(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边开始找第一个偶数
//		while ((left < right) && ((arr[left] % 2) != 0))
//		{
//			left++;
//		}
//		//从右边开始找第一个奇数
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
////杨氏矩阵 
////有一个二维数组.
////数组的每行从左到右是递增的，每列从上到下是递增的.
////在这样的数组中查找一个数字是否存在。
////时间复杂度小于O(N);
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
	printf("请输入要查找的数字：");
	scanf("%d", &key);
	int x = sizeof(arr) / sizeof(arr[0]);//行数
	int y = sizeof(arr[0]) / sizeof(arr[0][0]);//列数
    int find=search(arr, &x, &y, key);
	if (find)
	{
		printf("找到了%d,%d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}
