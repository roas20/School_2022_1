#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k, h;
	double s; //k = ü��, h = Ű, s = ǥ�� ü��

	printf("Ű�� ü���� �Է��ϼ���: ");
	scanf("%d %d", &h, &k);

	s = (h - 100.0) * 0.9;

	if (k > s)
		printf("��ü���Դϴ�.\n");

	else if (k < s)
		printf("��ü���Դϴ�.\n");

	else
		printf("ǥ���Դϴ�.\n");

	return 0;

}
