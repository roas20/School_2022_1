#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x, y;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	
	prinft("2를 곱하고 싶은 횟수: ");
	scanf("%d", &y);

	printf("%d<<%d의 값: %d\n", x, y, x << y);


	return 0;
}