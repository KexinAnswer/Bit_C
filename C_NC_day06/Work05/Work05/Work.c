//ʵ��һ���������ж�һ�����ǲ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void judge_prime(int num)
{
	int i = 0;
	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
			break;
	}
	if (i>sqrt(num))
		printf("%d������\n", num);
	else
		printf("%d��������\n", num);
}


 
int main()
{

	int prime = 0;

	while (prime != -1)
	{
		printf("����-1�˳���������һ����:>");
		scanf("%d", &prime);

		judge_prime(prime);
	}


	system("pause");
	return 0;
}