#include <stdio.h>

int main()
{
	char c;

	printf("문자를 입력하시오: ");
	c = getchar();

	switch (c)
	{

	case 'a':
	case 'i':
	case 'e':
	case 'o':
	case 'u':
		printf("모음입니다.\n");

		break;

	default:
		printf("자음입니다.\n");

		break;

	}

	return 0;
}