//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((2 == b ^ 3 == a) == 1) &&
							((2 == b ^ 4 == e) == 1) &&
							((1 == c ^ 2 == d) == 1) &&
							((5 == c ^ 3 == d) == 1) &&
							((4 == e ^ 1 == a) == 1) &&
							a != b && a != c && a != d && a!= e &&
							b != c && b != d && b != e &&
							c != d && c != e &&
							d != e)
						{
							printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n",a,b,c,d,e);
							printf("\n");
						}
					}
				}

			}
		}
	}

	system("pause");
	return 0;
}