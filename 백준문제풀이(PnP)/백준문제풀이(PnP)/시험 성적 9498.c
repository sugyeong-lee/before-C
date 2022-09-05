//시험 성적 9498

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 90)
		printf("A 입니다.");
	else if (score >= 80)
		printf("B 입니다.");
	else if (score >= 70)
		printf("C 입니다.");
	else if (score >= 60)
		printf("D 입니다.");
	else
		printf("F 입니다.");
}