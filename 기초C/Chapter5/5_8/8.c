#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592

#include<stdio.h>

int main() {

	double A, V, r;

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);

	A = 4.0 * PI * r * r;
	V = 4.0 / 3.0 * PI * r * r * r;

	printf("���� ǥ����: %lf\n���� ü��: %lf\n", A, V);
	

	return 0;
}