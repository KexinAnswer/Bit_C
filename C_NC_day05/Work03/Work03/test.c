//��д����ģ��������������ĳ���
//�Զ������������롣������ȷ����ʾ����½�ɹ�����������������������
//����������Σ����ξ�������ʾ�˳�����

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
		printf("����������");
		scanf("%s",&input);

		
		//if (input == key)
		if (strcmp(key,input)==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		if (i<2)
		{
			printf("����������������룬����%d�λ���\n",2-i);
		}
		else        
		{
			printf("û�л�����\n");
		}

	}
	if (i == 3)
	{
		printf("�˳�����\n");
		 
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
//		printf("����������;>");
//
//		scanf("%d", &input);
//		if (input == key)
//		{
//			printf("\n��½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//
//		}
//	}
//	if (i == 3 )
//	{
//		printf("��½ʧ���˳�����\n");
//	}
//
//	system("pause");
//	return 0;
//}


