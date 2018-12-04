#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



void Dis_num(char Show[ROW][COL],char Rel[ROW][COL], int x , int y,int logo[ROW][COL])
{
	int i = 0;
	int j = 0;
	Show[x][y] = Rel[x][y - 1] +
		Rel[x - 1][y - 1] +
		Rel[x - 1][y] +
		Rel[x - 1][y + 1] +
		Rel[x][y + 1] +
		Rel[x + 1][y + 1] +
		Rel[x + 1][y] +
		Rel[x + 1][y - 1]-7*'0';
	logo[x][y] = 1;

	if (Show[x][y] == '0')
	{
		if (logo[x][y - 1] != 1)
		{
			Dis_num(Show,Rel,x,y-1,logo);
		}
		if (logo[x][y + 1] != 1)
		{
			Dis_num(Show, Rel, x, y + 1, logo);
		}
		if (logo[x-1][y] != 1)
		{
			Dis_num(Show, Rel, x-1, y , logo);
		}
		if (logo[x+1][y] != 1)
		{
			Dis_num(Show, Rel, x+1, y, logo);
		}
	}
	//for (i = -1; i < 2; i++)
	//{
	//	for (j = -1; j < 2; j++)
	//	{
	//		if (Rel[x + i][y + j] != '0')
	//			return;
	//	}
	//}

	//for (i = -1; i < 2; i+=2)
	//{
	//	for (j = -1; j < 2; j+=2)
	//	{
	//		if (logo[x+i][y+j] != 1)
	//		{
	//			Dis_num(Show,Rel, x+i, y+j, logo);
	//		}
	//		
	//	}
	//}
	
	////上移1个
	//if (x > 0 && x<10 && y - 1 > 0 && y < 10 && logo[x][y-1] != 1)
	////if (x>0 &&y - 1 > 0)
	//{
	//	if (Rel[x][y - 1] == '0' )
	//	{
	//		y--;
	//		Dis_num(Show, Rel, x, y,logo);
	//	}
	//}



	////左移1个
	//if (x - 1 > 0 && x<10 && y > 0 && y<10 && logo[x-1][y] != 1)
	////if (x - 1 > 0)
	//{
	//	if (Rel[x - 1][y] == '0')
	//	{
	//		x--;
	//		Dis_num(Show, Rel, x , y,logo);
	//	}
	//}

	////下移1个
	//if (x > 0 && x<10 && y> 0 && y + 1<10 && logo[x][y+1] != 1)
	////if (y + 1 < 10)
	//{
	//	if (Rel[x][y + 1] == '0' )
	//	{
	//		y++;
	//		Dis_num(Show, Rel, x, y,logo);
	//	}
	//}
	//
	////右移1个
	//if (x > 0 && x + 1<10 && y > 0 && y<10 && logo[x+1][y] != 1)
	////if (x + 1 < 10)
	//{
	//	if (Rel[x + 1][y] == '0' )
	//	{
	//		x++;
	//		Dis_num(Show, Rel, x, y,logo);
	//	}
	//}














	//if (x > 0 && x<10 && y - 1 > 0 && y<10)
	////if (x>0 &&y - 1 > 0)
	//{
	//	if (Rel[x][y - 1] == '0')
	//	{
	//		Dis_num(Show, Rel, x, y - 1);
	//	}
	//}

	////if (Rel[x - 1][y - 1] == '0')
	////{
	////	Dis_num(Show, Rel, x - 1, y - 1);
	////}

	//if (x-1 > 0 && x<10 && y > 0 && y<10)
	////if (x - 1 > 0)
	//{
	//	if (Rel[x - 1][y] == '0')
	//	{
	//		Dis_num(Show, Rel, x - 1, y);
	//	}
	//}

	////if (Rel[x - 1][y + 1] == '0')
	////{
	////	Dis_num(Show, Rel, x - 1, y + 1);
	////}
	//
	//if (x > 0 && x<10 && y> 0 && y+1<10)
	////if (y + 1 < 10)
	//{
	//	if (Rel[x][y + 1] == '0')
	//	{
	//		Dis_num(Show, Rel, x, y + 1);
	//	}
	//}
	//
	////if (Rel[x + 1][y + 1] == '0')
	////{
	////	Dis_num(Show, Rel, x + 1, y + 1);
	////}

	//if (x > 0 && x+1<10 && y > 0 && y<10)
	////if (x + 1 < 10)
	//{
	//	if (Rel[x + 1][y] == '0')
	//	{
	//		Dis_num(Show, Rel, x + 1, y);
	//	}
	//}

	////if (Rel[x + 1][y - 1] == '0')
	////{
	////	Dis_num(Show, Rel, x + 1, y - 1);
	////}
}


void change(char rel[ROW][COL],int row, int col, int x, int y )
{
	int a = 0;
	int b = 0;

	if (rel[x][y] == '1')
	{
		rel[x][y] = '0';
		while (1)
		{
			a = rand() % 9 + 1;
			b = rand() % 9 + 1;

			if (rel[a][b] == '0')
			{
				rel[a][b] = '1';
				break;
			}
		}
	}

}



void Init(char board[ROW][COL], int row, int col, char input)
{
	memset(board,input,ROW*COL);
}


void Dis_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d", i);

		for (j = 1; j < col-1; j++)
		{
			printf( " %c",board[i][j]);
		}
		printf("\n");
	}
}

void Put_Thunder(char board[ROW][COL], int row, int col, char input)
{
	
	int i = 0;
	int x = 0;
	int y = 0;
	int count = 0;
	while (count < DOOM)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}
			
}

int Sweep_Thunder(char rel[ROW][COL], char show[ROW][COL], int row, int col,int count)
{
	int x = 0;
	int y = 0;
	int logo[ROW][COL] = { 0 };


	printf("请输入:>");
	scanf("%d %d", &x, &y);

	//如果玩家输入第一个坐标为雷，将雷转移位置
	if (count == 0)
	{
		change(rel, row, col, x, y);

	}

	if (rel[x][y] == '1')
	{
		printf("你输了，游戏结束\n");
		return 0;
	}
	
	else
	{
		Dis_num(show,rel, x, y,logo);
		return 1;
	}
}
