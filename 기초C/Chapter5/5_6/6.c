#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("2�� ����: %d\n", ~x + 1);

	return 0;
}