//��дһ������ʵ��n^K��ʹ�õݹ�ʵ��

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int test(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	else
	{
		return n * test(n,k-1);
	}
	
}

int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;

	printf("������ n �� k:>");

	scanf("%d %d",&n,&k);

	ret = test(n,k);

	printf("%d^%d = %d\n",n,k, ret);

	system("pause");
	return 0;

}