#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k, h;
	double s; //k = 체중, h = 키, s = 표준 체중

	printf("키와 체중을 입력하세요: ");
	scanf("%d %d", &h, &k);

	s = (h - 100.0) * 0.9;

	if (k > s)
		printf("과체중입니다.\n");

	else if (k < s)
		printf("저체중입니다.\n");

	else
		printf("표준입니다.\n");

	return 0;

}
