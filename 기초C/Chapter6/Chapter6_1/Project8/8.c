#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, a; //h = �ð�, a = ����

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &h, &a);

	if (h < 17) {

		if (a > 13 && a < 65)
			printf("����� 34000���Դϴ�.");

		else if ((a > 2 && a < 13) || a >= 65)
			printf("����� 25000���Դϴ�.");

	}

	else {

		printf("����� 10000���Դϴ�.");

	}


	return 0;

}
