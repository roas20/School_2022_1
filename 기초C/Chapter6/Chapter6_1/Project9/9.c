#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;

	printf("x�� ���� �Է��Ͻÿ�: ");

	scanf("%lf", &x);

	if (x <= 0) {

		y = x * x - 9 * x + 2;

	}

	else

		y = 7 * x + 2;

	printf("f(x)�� ���� %lf", y);

	return 0;

}