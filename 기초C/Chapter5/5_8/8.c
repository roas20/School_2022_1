#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592

#include<stdio.h>

int main() {

	double A, V, r;

	printf("반지름을 입력하시오: ");
	scanf("%lf", &r);

	A = 4.0 * PI * r * r;
	V = 4.0 / 3.0 * PI * r * r * r;

	printf("구의 표면적: %lf\n구의 체적: %lf\n", A, V);
	

	return 0;
}