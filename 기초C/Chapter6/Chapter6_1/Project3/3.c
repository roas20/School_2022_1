#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	int min;
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	min = x;

	if (min > y) {
		if (y > z)
			min = z;

		else
			min = y;
	}

	else if (min > z) {
		if (y > z)
			min = z;
		else
			min = y;
	}

	printf("제일 작은 정수는 %d입니다.\n", min);

	return 0;
}
