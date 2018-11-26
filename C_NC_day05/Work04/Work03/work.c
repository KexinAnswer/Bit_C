//编写一个程序，可以一直接受键盘字符
//如果是小写字符就输出对应的大写字符。
//如果接受的是大写字符，就输出对应的小写字符
//如果是数字不输出

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{

	int ch = 0;
	printf("请输入需要转换的英文字母：\n");

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
		{
			ch = ch + 32;
			putchar(ch);
			continue;
		}

		else if (ch >= 97 && ch <= 122)
		{
			ch = ch - 32;
			putchar(ch);
			continue;
		}
	}
	system("pause");
	return 0;
}