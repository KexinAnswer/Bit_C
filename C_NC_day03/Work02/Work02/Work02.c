//计算1/1 - 1/2 + 1/3 ... + 1/99 - 1/100的值

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0;
	int j = 0;
	double sum = 0.0;
	
	for ( i = 1; i <= 100; i++)
	{
		
		sum += 1.0/(i*pow(-1,i+1));
	}
	
	printf("结果为%lf", sum);
	
	system("pause");
	return 0;
}