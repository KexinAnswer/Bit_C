//дһ���ݹ麯��DigitSum(n),����һ���Ǹ������������������������֮��
//���磬����DigitSum(1729),��Ӧ�÷���1+7+2+9.���ĺ���19

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return DigitSum(n / 10) + n % 10;
	}
}

int main()
{
	int num = 0;
	int ret = 0;
	printf("������һ���Ǹ�����:>");
	scanf("%d", &num);

	ret = DigitSum(num);

	printf("���Ϊ%d", ret);
	
	system("pause");
	return 0;
}