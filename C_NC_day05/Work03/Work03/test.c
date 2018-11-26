//编写代码模拟三次密码输入的场景
//对多输入三次密码。密码正确，提示“登陆成功”，密码错误可以重新输入
//最多输入三次，三次均错，则提示退出程序

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	char input[10] = {0};
	//int key = 123456;
	char key[] = "1234";
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码");
		scanf("%s",&input);

		
		//if (input == key)
		if (strcmp(key,input)==0)
		{
			printf("登陆成功\n");
			break;
		}
		if (i<2)
		{
			printf("输入错误请重新输入，还有%d次机会\n",2-i);
		}
		else        
		{
			printf("没有机会了\n");
		}

	}
	if (i == 3)
	{
		printf("退出程序\n");
		 
	}
	
	system("pause");
	return 0;

}




























//int main()
//{
//
//	int key = 123456;
//	int i = 0;
//	int input = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码;>");
//
//		scanf("%d", &input);
//		if (input == key)
//		{
//			printf("\n登陆成功！\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新输入！\n");
//
//		}
//	}
//	if (i == 3 )
//	{
//		printf("登陆失败退出程序\n");
//	}
//
//	system("pause");
//	return 0;
//}


