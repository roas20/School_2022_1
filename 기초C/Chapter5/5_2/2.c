#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	double x, y, sum, sub, mul, div;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = x / y;

	printf("%lf %lf %lf %lf\n", sum, sub, mul, div);

	return 0;
}