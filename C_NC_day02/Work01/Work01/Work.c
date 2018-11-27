//输入英文字母 进行大小写互换
//例如A->a  g->G

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int ch = 0;
	printf("请输入需要转换的英文字母：\n");
	
	while ((ch = getchar()) != EOF)
	{
		if (ch>=65 && ch<=90 )
		{
			ch = ch+32;
			putchar(ch);
			continue;
		}
		
		else if (ch>=97 && ch<=122 )
		{
			ch = ch-32;
			putchar(ch);
			continue;
		}
		
		else
		{
			printf("输入错误，请重新输入：\n");
		}
	}

	return 0;
}