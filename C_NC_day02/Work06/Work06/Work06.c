//�������������Լ��

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("��������Ҫ�����Լ����������:");
//	scanf("%d%d",&a,&b);
//
//	for (int i = 0; (a-b) != 0; i++)
//	{
//		if (a > b)
//		{
//			count = a - b;
//			if (count < b)
//			{
//
//				a = b;
//				b = count;
//			}
//			else
//			{
//
//				a = count;
//			}
//		}
//		else
//		{
//			a = a^b;
//			b = a^b;
//			a = a^b;
//		}
//	}
//	printf("���Լ����%d",a);
//
//	system("pause");
//	return 0;
//}

int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int i = 0;

	printf("������������:>");
	scanf("%d %d", &num_1, &num_2);

	for (i = num_1; i > 0; i--)
	{
		if (num_1 % i == 0 && num_2 % i == 0)
		{
			printf("���Լ��Ϊ%d\n",i);
		}
	}

	system("pause");
	return 0;
}