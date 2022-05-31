#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a, h;
	double c;

	printf("삼각형의 밑변:");
	scanf("%d", &a);

	printf("삼각형의 높이:");
	scanf("%d", &h);

	c = 0.5 * a * h;

	printf("삼각형의 넓이: %lf\n", c);

	return 0;
}