#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	double sum = 0;
	i = -1;
	for (j = 1; j <= 100; j++)
	{
		i = -1 * i;
		sum = sum + i*(1.0 / j);
	}
	printf("%f\n", sum);
	system("pause");
	return 0;
}