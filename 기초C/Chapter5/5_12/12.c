#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char a, b, c, d;
	unsigned int result = 0x00000000;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &a);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &b);

	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c);

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &d);

	result = result | a;
	result = result | (b << 8);
	result = result | (c << 16);
	result = result | (d << 24);

	printf("�����: %x\n", result);

	return 0;
}