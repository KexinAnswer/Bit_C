//�����������α�����ֵ��������ֵ�����ݽ��н���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0;
	int b = 0;
	int c = 0;
	printf("������������Ҫ����������ֵ");
	scanf("%d%d",&a,&b);
	c = a;
	a = b;
	b = c;

	printf("a  = %d , b = %d\n", a,b);

	system("pause");
	return 0;

}

