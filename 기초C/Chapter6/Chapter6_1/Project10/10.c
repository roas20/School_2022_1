#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("��ǥ(x, y): ");

	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и�\n");

	else if (x < 0 && y > 0)
		printf("2��и�\n");

	else if (x < 0 && y < 0)
		printf("3��и�\n");

	else
		printf("4��и�\n");


	return 0;

}