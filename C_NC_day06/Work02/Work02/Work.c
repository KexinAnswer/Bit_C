 //ʹ�ú���ʵ���������Ľ���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void change(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
int main()
{
	int a = 0;
	int b = 0;

	printf("������������->");
	scanf("%d %d",&a,&b);

	change(&a,&b);

	printf("a = %d  b = %d", a, b);

	system("pause");
	return 0;
}