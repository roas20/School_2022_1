#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double d, a, r;

	printf("�Ÿ��� �Է��Ͻÿ�:");
	scanf("%lf", &d);

	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &a);

	r = 360 / a * d / 2 / 3.14;

	printf("������ �������� %f:", r);

	return 0;
}