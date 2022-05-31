#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x, f = 0; // f = 피트
	double i = 0; // i = inch

	printf("키를 입려하시오: ");
	scanf("%d", &x);

	i = x / 2.54;
	f = i / 12;

	printf("%dcm는 %d피트 %lf인치입니다.\n", x, f, i);

	return 0;
}