//��ɲ�������Ϸ

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("***************************************\n");
	printf("***********  1.����Ϸ    **************\n");
	printf("************ 0.�˳���Ϸ  **************\n");
	printf("***************************************\n");
}

void play()
{
	int random = rand()%100+1;;

	int num = 0;

	while (1)
	{
		printf("����������->");
		scanf("%d",&num);
		if (num > random)
		{
			printf("�´���\n");
		}
		else if (num < random)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ�����%d\n", random);
			break;
		}
	}

}
int main()
{
	int ret = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &ret);
		switch (ret)
		{
		again:
		case 1:
			play();
		case 0:
			break;
		default:
			printf("ѡ��������������룡");
			break;
		}
	} while (ret != 0);


	system("pause");
	return 0;
}