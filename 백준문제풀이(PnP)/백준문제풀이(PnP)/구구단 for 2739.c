// 구구단 for 2739
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("단 : ");
	scanf("%d", &a);

	for (b=1;b<10;b++)
	{
		printf("%d * %d = %d\n", a, b, a * b);
	}

	return 0;
}