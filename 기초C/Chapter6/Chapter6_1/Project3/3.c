#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	int min;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	min = x;

	if (min > y) {
		if (y > z)
			min = z;

		else
			min = y;
	}

	else if (min > z) {
		if (y > z)
			min = z;
		else
			min = y;
	}

	printf("���� ���� ������ %d�Դϴ�.\n", min);

	return 0;
}
