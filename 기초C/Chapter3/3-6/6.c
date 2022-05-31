#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	double w, m;
	
	printf("몸무게를 입력하세요:");
	scanf("%lf", &w);

	m = w * 0.17;
	printf("달에서의 몸무게는 %lfKg입니다.\n", m);

	return 0;
}