#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
    double x, y, z;
	double sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;
	printf("���� %lf�̰� ����� %lf�Դϴ�.\n" , sum, avg);
	
	
	return 0;
}