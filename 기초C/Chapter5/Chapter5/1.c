#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x, y, a, b;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	a = x / y;
	b = x % y;

	printf("��: %d ������: %d\n", a, b);
	
	return 0;
}