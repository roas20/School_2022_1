#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y;
	int a;

	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &y);
	
	a = (x > 0) ? (y > 0) ? 1 : 4 : (y > 0) ? 2 : 3;
	printf("%d��и�\n", a);

	(x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);


	//(x < 0 && y > 0) ? printf("2��и�\n") : printf("");
	//(x < 0 && y < 0) ? printf("3��и�\n") : printf("");
	//(x > 0 && y < 0) ? printf("4��и�\n") : printf("");

	return 0;
}