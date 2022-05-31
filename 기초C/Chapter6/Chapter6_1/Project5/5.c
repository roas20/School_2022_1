#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, a;//h = 키, a = 나이

	printf("키를 입력하시오(cm): ");
	scanf("%d", &h);

	printf("나이를 입력하시오: ");
	scanf("%d", &a);

	if (h >= 140 && a >= 10)

		printf("타도 좋습니다.\n");

	else
		printf("죄송합니다.\n");


	return 0;
}
