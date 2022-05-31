#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

	double a, c;

	printf("화씨값을 입력하시오:");
	scanf("%lf", &a);

	c = (5.0 / 9.0) * (a - 32.0);
	printf("섭씨값은 %lf도입니다.\n", c);

	return 0;
}