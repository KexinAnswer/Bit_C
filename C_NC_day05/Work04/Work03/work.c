//��дһ�����򣬿���һֱ���ܼ����ַ�
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������ܵ��Ǵ�д�ַ����������Ӧ��Сд�ַ�
//��������ֲ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{

	int ch = 0;
	printf("��������Ҫת����Ӣ����ĸ��\n");

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