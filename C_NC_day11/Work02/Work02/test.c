//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

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
				printf("a�����֣�\n");
				break;
			}
			if (b == 1)
			{
				printf("b�����֣�\n");
				break;
			}
			if (c == 1)
			{
				printf("c�����֣�\n");
				break;
			}
			if (d == 1)
			{
				printf("d�����֣�\n");
				break;
			}
		}
	}

	system("pause");
	return 0;
}