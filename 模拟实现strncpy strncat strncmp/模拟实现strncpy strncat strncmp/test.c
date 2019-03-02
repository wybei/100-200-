#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>




//1.模拟实现strncpy
//char *my_strncpy(char *dest, const char*src, int n)
//{
//	assert(dest);
//	assert(src);
//	char*str1 = dest;
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	return str1;
//}
//int main()
//{
//	char* arr = "abcdef";
//	char arr1[20] = { 0 };
//	char* str = my_strncpy(arr1, arr, 4);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}






//模拟实现strncat
//char* my_strcat(char*dest, const char*src, int count)
//{
//	assert(dest);
//	assert(src);
//	char *str1 = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return str1;
//}
//int main()
//{
//	char arr1[15] = "abcdef";
//	char* arr2 = "ghjkl";
//	char* str = my_strcat(arr1, arr2,4);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}





//模拟实现strncmp
int my_strncmp(const char *dest, const char *src, int n)
{
	assert(dest);
	assert(src);
	while ((*dest == *src)&&(n--))
	{
		if (*dest=='\0')
		{
			return 0;
		}
		dest++;
		src++;
	}
	if (*dest > *src)
	{
		return 1;
	}
	else if (*dest < *src)
	{
		return -1;
	}
	return 0;
}
int main()
{
	char* arr1 = "abcde";
	char* arr2 = "abfde";
	int str = my_strncmp(arr1, arr2,3);
	printf("%d\n", str);
	system("pause");
	return 0;
}