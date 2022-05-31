#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, a; //h = 시간, a = 나이

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &h, &a);

	if (h < 17) {

		if (a > 13 && a < 65)
			printf("요금은 34000원입니다.");

		else if ((a > 2 && a < 13) || a >= 65)
			printf("요금은 25000원입니다.");

	}

	else {

		printf("요금은 10000원입니다.");

	}


	return 0;

}
