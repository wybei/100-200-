#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right-left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//     return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}



//#include <time.h>
//void mean()
//{
//	printf("****************************\n");
//	printf("******1.play   0.exit*******\n");
//	printf("****************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//	int main()
//	{
//		int input = 0;
//		srand((unsigned)time(NULL));
//		do
//		{
//			mean();
//			printf("��ѡ��:>");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ");
//				break;
//			default:
//				printf("ѡ�����������ѡ��");
//				break;
//			}
//		} while (input);


///*#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[10] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//	if (i >= 3)
//	{
//		printf("���δ����˳�����\n");
//	}



	int main()
	{
		int ch = 0;
		printf("������һ���ַ���\n");
		while ((ch = getchar()) != EOF)
		{
			if (ch >= 'a' &&ch <= 'z')
			{
				printf("%c\n", ch - 32);
			}
			else if (ch >= 'A'&&ch <= 'Z')
			{
				printf("%c\n", ch + 32);
			}
			else if (ch >= '0'&&ch <= '9')
			{
				;
			}
		}
		printf("\n");
		system("pause");
		return 0;
}


