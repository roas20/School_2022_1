#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	double AC, AE, BC, DE;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &BC);

	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &AC);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &AE);

	DE = AE * BC / AC;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.\n", DE);


	return 0;
}