#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void menu()
{
	printf("***********************************************\n");
	printf("*************       ɨ����Ϸ     **************\n");
	printf("*************   1.play  0.exit   **************\n");
	printf("***********************************************\n");

}


void game()
{

	char rel[ROW][COL] = {0};
	char show[ROW][COL] = {0};
	int ret = 0;
	int count = 0;
	int i = 0;
	int j = 0;

	//��ʼ��
	Init(rel,ROW,COL,'0');
	Init(show, ROW, COL, '*');
	//Dis_board(rel,ROW,COL); ��ʾ��
	//printf("------------------------------------------------\n");
	//Dis_board(show, ROW, COL);
	//printf("------------------------------------------------\n");

	Put_Thunder(rel,ROW,COL,'1');
	Dis_board(show, ROW, COL);

	do
	{
		printf("------------------------------------------------\n");

		ret = Sweep_Thunder(rel, show, ROW, COL,count);
		Dis_board(show, ROW, COL);
		
		count = 0;

		for (i = 1; i<ROW - 1; i++)
		{
			for (j = 1; j<COL - 1; j++)
			{
				if (show[i][j] == '*')
				{
					count++;
				}
			}
		}
		if (count == DOOM)
		{
			printf("��Ӯ�ˣ�\n");
			Dis_board(rel, ROW, COL);

			break;
		}

	} while (ret);


}



void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	


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