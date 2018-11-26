//完成猜数字游戏

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("***************************************\n");
	printf("***********  1.玩游戏    **************\n");
	printf("************ 0.退出游戏  **************\n");
	printf("***************************************\n");
}

void play()
{
	int random = rand()%100+1;;

	int num = 0;

	while (1)
	{
		printf("请输入数字->");
		scanf("%d",&num);
		if (num > random)
		{
			printf("猜大了\n");
		}
		else if (num < random)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了，答案是%d\n", random);
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
		printf("请选择->");
		scanf("%d", &ret);
		switch (ret)
		{
		again:
		case 1:
			play();
		case 0:
			break;
		default:
			printf("选择错误请重新输入！");
			break;
		}
	} while (ret != 0);


	system("pause");
	return 0;
}