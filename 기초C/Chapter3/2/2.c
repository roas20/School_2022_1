#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a;				// 정수 저장할 변수 선언
	double meter;		// 받은 정수에 대해 계산하고 저장하는 변수
	
	printf("마일을 입력하시오:");
	scanf("%d", &a);

	meter = a * 1609.0;
	
	printf("%d마일은 %lf미터입니다.\n", a, meter);

	return 0;
}