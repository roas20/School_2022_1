#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a;				// ���� ������ ���� ����
	double meter;		// ���� ������ ���� ����ϰ� �����ϴ� ����
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &a);

	meter = a * 1609.0;
	
	printf("%d������ %lf�����Դϴ�.\n", a, meter);

	return 0;
}