#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int com, user;
	srand((unsigned int)time(NULL));

	printf("�����Ͻÿ�.(1: ���� 2: ���� 3:��): ");
	scanf("%d", &user);

	com = rand() % 3 + 1;

	if (user == 1) {

		printf("��ǻ�� ����: %d\n", com);

		if (com == 1)
			printf("�����\n");

		else if (com == 2)
			printf("��ǻ�� �¸�\n");

		else if (com == 3)
			printf("���� �¸�\n");
	}

	else if (user == 2) {

		printf("��ǻ�� ����: %d\n", com);

		if (com == 1)
			printf("���� �¸�\n");

		else if (com == 2)
			printf("�����\n");

		else if (com == 3)
			printf("��ǻ�� �¸�\n");
	}

	else if (user == 3) {

		printf("��ǻ�� ����: %d\n", com);

		if (com == 1)
			printf("��ǻ�� �¸�\n");

		else if (com == 2)
			printf("���� �¸�\n");

		else if (com == 3)
			printf("�����\n");
	}

	return 0;

}
