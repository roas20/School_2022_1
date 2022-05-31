#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;

	printf("문자를 입력하시오: ");

	c = getchar();

	switch (c) {

	case 'R':
	case 'r':
		printf("Rectangle\n");
		break;

	case 'T':
	case 't':
		printf("Triangle\n");
		break;

	case 'C':
	case 'c':
		printf("Circle\n");
		break;

	default:
		printf("Unknown\n");
		break;

	}

	return 0;

}