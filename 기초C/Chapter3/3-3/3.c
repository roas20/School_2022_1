#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a, h;
	double c;

	printf("�ﰢ���� �غ�:");
	scanf("%d", &a);

	printf("�ﰢ���� ����:");
	scanf("%d", &h);

	c = 0.5 * a * h;

	printf("�ﰢ���� ����: %lf\n", c);

	return 0;
}