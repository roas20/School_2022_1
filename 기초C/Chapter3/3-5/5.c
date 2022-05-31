#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	double a,c;

	printf("실수를 입력하세요:");
	scanf("%lf", &a);

	c = (3 * a * a) + (7 * a) + 11;

	printf("다항식의 값은 %lf\n", c);

	return 0;
}