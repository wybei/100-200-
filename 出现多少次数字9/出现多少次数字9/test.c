#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 1;
	int i = 0;
	for (num = 1; num <= 100; num++)
	{
		if ((num % 10) == 9)
		{
			i++;
	}
		if ((num/10) == 9)
		{
			i++;
	    }
	}
	printf("%d\n", i);
	system("pause");
	return 0;
}