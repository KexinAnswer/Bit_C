//����������ʱ����������������������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0;
	int b = 0;

	printf("��������Ҫ�������������α���");
	scanf("%d%d",&a,&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d, b = %d",a,b);
	system("pause");
	return 0;
}