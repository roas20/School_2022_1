#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	double a,c;

	printf("�Ǽ��� �Է��ϼ���:");
	scanf("%lf", &a);

	c = (3 * a * a) + (7 * a) + 11;

	printf("���׽��� ���� %lf\n", c);

	return 0;
}