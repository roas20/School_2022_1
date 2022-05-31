#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int com, user;
	srand((unsigned int)time(NULL));

	printf("선택하시오.(1: 가위 2: 바위 3:보): ");
	scanf("%d", &user);

	com = rand() % 3 + 1;

	if (user == 1) {

		printf("컴퓨터 선택: %d\n", com);

		if (com == 1)
			printf("비겼음\n");

		else if (com == 2)
			printf("컴퓨터 승리\n");

		else if (com == 3)
			printf("유저 승리\n");
	}

	else if (user == 2) {

		printf("컴퓨터 선택: %d\n", com);

		if (com == 1)
			printf("유저 승리\n");

		else if (com == 2)
			printf("비겼음\n");

		else if (com == 3)
			printf("컴퓨터 승리\n");
	}

	else if (user == 3) {

		printf("컴퓨터 선택: %d\n", com);

		if (com == 1)
			printf("컴퓨터 승리\n");

		else if (com == 2)
			printf("유저 승리\n");

		else if (com == 3)
			printf("비겼음\n");
	}

	return 0;

}
