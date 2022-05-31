#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y;
	int a;

	printf("x 좌표를 입력하시오: ");
	scanf("%d", &x);

	printf("y 좌표를 입력하시오: ");
	scanf("%d", &y);
	
	a = (x > 0) ? (y > 0) ? 1 : 4 : (y > 0) ? 2 : 3;
	printf("%d사분면\n", a);

	(x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);


	//(x < 0 && y > 0) ? printf("2사분면\n") : printf("");
	//(x < 0 && y < 0) ? printf("3사분면\n") : printf("");
	//(x > 0 && y < 0) ? printf("4사분면\n") : printf("");

	return 0;
}