#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double d, a, r;

	printf("거리를 입력하시오:");
	scanf("%lf", &d);

	printf("각도를 입력하시오:");
	scanf("%lf", &a);

	r = 360 / a * d / 2 / 3.14;

	printf("지구의 반지름은 %f:", r);

	return 0;
}