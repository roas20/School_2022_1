#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int x, y, z, max;

	printf("3���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &x, &y, &z);

	max = x > y ? (x > z ? x : z) : (y > z) ? y : z;

	printf("�ִ밪 %d\n", max);
	

	return 0;
}