//����Ӣ����ĸ ���д�Сд����
//����A->a  g->G

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int ch = 0;
	printf("��������Ҫת����Ӣ����ĸ��\n");
	
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
			printf("����������������룺\n");
		}
	}

	return 0;
}