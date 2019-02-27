#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int cmp(const void *e1, const void *e2)
{
	return *(char*)e1 - *(char*)e2;
}
void swap(char *e1, char *e2, int widenth)
{
	assert(e1);
	assert(e2);
	int i = 0;
	for (i = 0; i < widenth; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		*e1++;
		*e2++;
	}
}
void my_qsort(void *base, int sz, unsigned int width, int(*cmp)(const void*e1, const void*e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if ((cmp((char*)base + j*width, (char*)base + (j + 1)*width))>0)
			{
				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
int main()
{
	int i = 0;
	int a[] = { 2, 1, 5, 4, 3, 6 };
	char b[] = { 'c', 'a', 'e', 'b', 'd' };
	int sz_a = sizeof(a) / sizeof(a[0]);
	int sz_b = sizeof(b) / sizeof(b[0]);
	unsigned int widenth_a = sizeof(int);
	unsigned int widenth_b = sizeof(char);
	my_qsort(a, sz_a, widenth_a, cmp);
	for (i = 0; i < sz_a; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	my_qsort(b, sz_b, widenth_b, cmp);
	for (i = 0; i < sz_b; i++)
	{
		printf("%c", b[i]);
	}
	system("pause");
	return 0;
}



