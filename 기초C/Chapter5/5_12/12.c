#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char a, b, c, d;
	unsigned int result = 0x00000000;

	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &a);

	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &b);

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &c);

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &d);

	result = result | a;
	result = result | (b << 8);
	result = result | (c << 16);
	result = result | (d << 24);

	printf("결과값: %x\n", result);

	return 0;
}