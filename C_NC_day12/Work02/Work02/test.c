//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0;
	int b = 0;
	printf("����������������:>");

	scanf("%d %d", &a, &b);

	printf("%d", (b + ((a - b) >> 1)));

	system("pause");
	return 0;
}