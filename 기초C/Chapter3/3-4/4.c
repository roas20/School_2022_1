#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

	double a, c;

	printf("ȭ������ �Է��Ͻÿ�:");
	scanf("%lf", &a);

	c = (5.0 / 9.0) * (a - 32.0);
	printf("�������� %lf���Դϴ�.\n", c);

	return 0;
}