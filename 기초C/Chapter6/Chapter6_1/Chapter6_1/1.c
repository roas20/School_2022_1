#include <stdio.h>

int main()
{
	char c;

	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();

	switch (c)
	{

	case 'a':
	case 'i':
	case 'e':
	case 'o':
	case 'u':
		printf("�����Դϴ�.\n");

		break;

	default:
		printf("�����Դϴ�.\n");

		break;

	}

	return 0;
}