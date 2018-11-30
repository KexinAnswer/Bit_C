//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int murderer = 1;

	for (i = 1; i <= 4; i++)
	{
		switch (i)
		{
		case 1:
			a = 1;
			c = 1;
			d = 1;
			d = 0;
			break;
		case 2:
			a = 0;
			c = 0;
			d = 1; 
			d = 0;
			break;
		case 3:
			a = 0;
			c = 1;
			d = 0;
			d = 0;
			break;
		case 4:
			a = 0; 
			c = 1;
			d = 1;
			d = 1;
			break;
		default:
			break;
		}
		if (((a^b^c^d) == 1) && ((a&b) == 0) && ((c&d) == 0) && ((b&c) == 0))
		{
			if (a == 1)
			{
				printf("a是凶手！\n");
				break;
			}
			if (b == 1)
			{
				printf("b是凶手！\n");
				break;
			}
			if (c == 1)
			{
				printf("c是凶手！\n");
				break;
			}
			if (d == 1)
			{
				printf("d是凶手！\n");
				break;
			}
		}
	}

	system("pause");
	return 0;
}