//������ While 2739
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b = 1;

	printf("�� : ");
	scanf("%d", &a);

	while (b <= 9)
	{
		printf("%d * %d = %d\n", a, b, a * b);
		b++;
	}
}