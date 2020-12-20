#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void start_mine_clearance() {

	int input = 0;

	do {

		mine_clear_ance_menu();

		scanf("%d", &input);

		switch (input) {
		case 0 :
			printf("ÍË³ö\n");
			break;
		case 1:
			printf("start mine clearance ~~~~\n");
			break;
		default:
			printf("not found selected , please try agin !\n");
			break;
		}
	} while (input != 0);

	return 0;

}

int mine_clear_ance_menu() {
	printf("**********************************\n");
	printf("*************	0.exit	**********\n");
	printf("*************	1.play	**********\n");
	printf("**********************************\n");
	return 0;
}