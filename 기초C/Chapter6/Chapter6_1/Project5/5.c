#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, a;//h = Ű, a = ����

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &h);

	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &a);

	if (h >= 140 && a >= 10)

		printf("Ÿ�� �����ϴ�.\n");

	else
		printf("�˼��մϴ�.\n");


	return 0;
}
