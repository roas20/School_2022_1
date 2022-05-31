#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	double x, y, sum, sub, mul, div;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = x / y;

	printf("%lf %lf %lf %lf\n", sum, sub, mul, div);

	return 0;
}