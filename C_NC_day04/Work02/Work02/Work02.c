//求出0-999之间的所有“水仙花数”并输出
//“水仙花数”是指一个三位数，其各位数字的立方和，却好等于该数本身，如:153 = 1+5+3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;


	for (i = 100; i <= 999; i++)
	{

		//嵌套for循环
		a = i / 100;
		b = (i - 100 * a) / 10;
		c = i - 100 * a - 10 * b;
		sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

		if (i == sum)
		{
			printf("%d\t", i);
		}
	}

	system("pause");
	return 0;
}