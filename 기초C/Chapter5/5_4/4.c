#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x, f = 0; // f = ��Ʈ
	double i = 0; // i = inch

	printf("Ű�� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	i = x / 2.54;
	f = i / 12;

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�.\n", x, f, i);

	return 0;
}