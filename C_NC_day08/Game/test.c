
#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("************************************\n");
	printf("**       1.play      0.exit       **\n");
	printf("************************************\n");


}

void game()
{
	
	char board[ROW][COL];
	int ret = 0;
	//初始化棋盘
	Init(board, ROW, COL,' ');

	//打印棋盘

	
	Dis_board(board, ROW, COL);

	while (1)
	{
		//玩家走 #
		Player_Move(board, ROW, COL, '#');
		//电脑走 *
		ret = Is_Win(board, ROW, COL, '#');
		if (ret == 1)
		{
			printf("玩家赢\n");
			
			break;
		}
		else if (ret == 2)
		{
			printf("平局\n");
			break;
			
		}
		Computer_Move(board, ROW, COL, '*');

		//打印棋盘
		Dis_board(board, ROW, COL);
		//判断输赢
		ret = Is_Win(board, ROW, COL, '*');
		if (ret == 1)
		{
			printf("电脑赢\n");
			break;
		}
		else if (ret ==2)
		{
			printf("平局\n");
			break;
		}
		

	}
	Dis_board(board, ROW, COL);
		

}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误请重新选择\n");
			break;
		}
	} while (input);


}


int main()
{

	test();

	system("pause");
	return 0;

}





