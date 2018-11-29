
#include "game.h"

void Init(char board[ROW][COL] ,int row, int col,char input)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = input;
		}
	}
	
}


void Dis_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" ");
			printf("%c", board[i][j]);  
			printf(" ");
			if (j < 2)
			{
				printf("|");

			}
		}
		printf("\n");
		for (j = 0; j < row; j++)
		{
			if (i < 2)
			{
				printf("---");
				if (j<2)
					printf("|");

			}
			
			
		}
		printf("\n");
			
		

	}
}

void Player_Move(char board[ROW][COL], int row, int col,char input)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3 && board[x-1][y-1]==' ')
		{
			board[x - 1][y - 1] = input;
			break;
		}
		else
		{
			printf("输入有误!\n");
		}
	}
}

void Computer_Move(char board[ROW][COL], int row, int col,char input)
{

	while (1)
	{	
		int x = rand()%3;
		
		int y = rand()%3;
		if (board[x][y] == ' ')
		{
			board[x][y] = input;
			break;
		}
	}
}

int Is_Win(char board[ROW][COL], int row, int col, char input)

{
	//赢
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (   board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == input
			|| board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] == input
			|| board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == input
			|| board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == input)
			//|| board[i][i] == board[i][i] && board[i][i] == board[i][i] && board[i][i] == input
			//|| board[row - i][col - i] == board[row][col - i] && board[row - i][col - i] == board[row - i][col - i] && board[row - i][col - i] == input
		{
			return 1;
		}
		
	}
	
	
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//继续
				
		}
	}
	
	
	return 2;//平局
	
	
}















