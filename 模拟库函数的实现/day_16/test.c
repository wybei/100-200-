#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>





//1.实现strcpy
char* my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* str1 = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return str1;
}
int main()
{
	char* arr = "abcdef";
	char arr1[] = { 0 };
	char* str = my_strcpy(arr1, arr);
	printf("%s\n", str);
	system("pause");
	return 0;
}





//2.实现strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* str1 = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return str1;
//}
//int main()
//{
//	char arr1[15] = "abcdef";
//	char* arr2 = "ghjkl";
//	char* str = my_strcat(arr1, arr2);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}




//3.实现strstr
//char* my_strstr(const char*dest, const char*src)
//{
//	const char* s1 = dest;
//	const char* s2 = src;
//	const char* cur = dest;
//	assert(dest);
//	assert(src);
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = src;
//		while ((*s1) && (*s2) && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return    (char*) cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *arr1 = "abcdefgh";
//	char* arr2 = "cdef";
//	char* str = my_strstr(arr1, arr2);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}




//4.实现strchr
//char* my_strchr(const char*dest,  int src)
//{
//	assert(dest);
//	while (*dest)
//	{
//		if (*dest == src)
//		{
//			return (char*)dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *arr1 = "abcdefgh";
//	char* str = my_strchr(arr1, 'f');
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}





//实现strcmp
//int my_strcmp(const char*dest, const char*src)
//{
//	assert(dest);
//	assert(src);
//	while (*dest==*src)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	if (*dest > *src)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* arr1 = "abcde";
//	char* arr2 = "abcde";
//	int str = my_strcmp(arr1, arr2);
//	printf("%d\n", str);
//	system("pause");
//	return 0;
//}




//6.实现memcpy
//void* my_memcpy(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7};
//	int arr1[] = { 0 };
//	int *ret=my_memcpy(arr1, arr+3,12);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	system("pause");
//	return 0;
//}





//7.实现memmove
//void* my_memmove(void* dest, const void* src, size_t sz)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	if (dest < src)
//	{
//		//前->后
//		while (sz--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		//后->前
//		while (sz--)
//		{
//			*((char *)dest + sz) = *((char*)src + sz);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int *ret = my_memmove(arr1, arr1+3, 8);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	system("pause");
//	return 0;
//}