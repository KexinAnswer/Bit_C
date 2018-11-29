
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
	//��ʼ������
	Init(board, ROW, COL,' ');

	//��ӡ����

	
	Dis_board(board, ROW, COL);

	while (1)
	{
		//����� #
		Player_Move(board, ROW, COL, '#');
		//������ *
		ret = Is_Win(board, ROW, COL, '#');
		if (ret == 1)
		{
			printf("���Ӯ\n");
			
			break;
		}
		else if (ret == 2)
		{
			printf("ƽ��\n");
			break;
			
		}
		Computer_Move(board, ROW, COL, '*');

		//��ӡ����
		Dis_board(board, ROW, COL);
		//�ж���Ӯ
		ret = Is_Win(board, ROW, COL, '*');
		if (ret == 1)
		{
			printf("����Ӯ\n");
			break;
		}
		else if (ret ==2)
		{
			printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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





