#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int gameEnter() {

	int range = 0;

	reEnter:
	printf("please enter number range >:");
	scanf("%d", &range);

	if (range < 1 || range > 10000) {
		printf("number must in 1 - 10000 !\n");
		goto reEnter;
	}
	
	int random = initRandomSpeed();

	menu(range);

	return 0;
}

int initRandomSpeed() {

	typedef unsigned int u_int;

	int random = (u_int)time(0);

	srand(random);

	return random;

}

int GeneratorRandom(int range) {

	return rand() % range + 1;
	
}

int menu(int range) {
	
agin:
	printf("********************************\n");
	printf("*******	1:start 2:end	********\n");
	printf("********************************\n");
	printf("please select >:");

	int in = 0;

in:	
	scanf("%d", &in);

	switch (in) {
	case 1:
		start(range);
		goto agin;
	case 2:
		break;
	default:
		printf("not found selected !  please try agin onece ! \n");
		goto in;
	}
	
}


int start(int range) {

	int number = GeneratorRandom(range);

	printf("please enter guess number ! \n");

	while (1){

		int guessNumber = 0;

		scanf("%d", &guessNumber);

		if (number > guessNumber) {
			printf("It's small ! \n");
		}
		else if (number < guessNumber) {
			printf("It's big ! \n");
		}
		else {
			printf("\r\n yes ! It's %d \r\n\r\n", guessNumber);
			break;
		}
	}
	
}
