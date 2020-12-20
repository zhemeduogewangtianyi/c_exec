#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "TicTacToe.h"

int playTicTacToe() {

	int input = 0;

	typedef unsigned int u_int;

	srand((u_int)time(NULL));

	do {

		tictactoeMenu();

		printf("please select:>");
		scanf("%d", &input);

		switch (input) {
		case 1 : 
			startTicTacToeGame();
			break;
		case 2:
			printf("%s", "exit\n");
			break;
		default:
			printf("please select agin !\n");
			break;
		}

	} while (input != 2);

	return 0;

}

int tictactoeMenu() {
	printf("****************************\n");
	printf("****** 1.play  2.exit ******\n");
	printf("****************************\n");
	return 0;
}

int startTicTacToeGame() {

	char board[ROW][COL] = { 'a' };

	initBoard(board);

	disableBoard(board);

	char ret = 0;

	while (1) {
		
		playerMove(board);
		disableBoard(board);
		ret = isWin(board);
		if (ret != 'C') {
			break;
		}

		computeMove(board);
		disableBoard(board);
		ret = isWin(board);
		if (ret != 'C') {
			break;
		}

	}

	if (ret == '*') {
		printf("player Ê¤³ö\n");
	}
	else if (ret == '#') {
		printf("compute Ê¤³ö\n");
	}
	else {
		printf("Æ½\n");
	}
	

	return 0;

}

int initBoard(char board[ROW][COL]) {
	
	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COL; j++) {

			board[i][j] = ' ';

		}

	}

	return 0;

}

int disableBoard(char board[ROW][COL]) {
	for (int i = 0; i < ROW ; i++) {

		
		for (int j = 0; j < COL; j++) {

			printf(" %c ", board[i][j]);
			
			if(j < COL - 1)
				printf("|");

		}
		
		printf("\n");

		if (i < ROW - 1) {
			for (int j = 0; j < COL; j++) {
				printf("---");

				if(j < COL - 1)
					printf("|");

			}
			printf("\n");
		}
		
	}
	return 0;
}

int playerMove(char board[ROW][COL]) {

	int x = 0;
	int y = 0;
	
	while (1) {
		printf("player move >:");
		scanf("%d%d", &x, &y);
		
		if (x >= 1 && x <= ROW &&  y >= 1  && y <= COL) {
			
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}else {
				printf("x , y already exists\n");
			}
			
		}else {
			printf("not found -> x , y\n");
		}
	}

	return 0;

}

int computeMove(char board[ROW][COL]) {
	
	printf("compute move >:\n");
	int count = 0;
	while (1) {
		count++;
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
		if (count == ROW * COL) {
			break;
		}
		
	}
}

int isWin(char board[ROW][COL]) {

	for (int i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}

	for (int i = 0; i < COL; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return board[i][1];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}

	if (isFull(board)) {
		return 'Q';
	}

	return 'C';

}

int isFull(char board[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
