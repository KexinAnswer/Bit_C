//ʵ��һ������,��ӡ�˷��ھ����ھ����������������Լ�ָ����
//����9�����9*9�ھ���������12�����12*12�ĳ˷��ھ���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


void table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{

	int num = 0;

	printf("������Ҫ��ӡ�ĳ˷��ھ�������->");
	scanf("%d", &num);

	table(num);

	system("pause");
	return 0; 
}