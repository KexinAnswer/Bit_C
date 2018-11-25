//判断1000年-2000年之间的闰年
//普通闰年：能被4整除但是不能被100整除
//世纪闰年：能被400整除
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year = 1000;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
			printf("%d ", year);
		else if (year % 400 == 0)
			printf("%d ",year);
		/*if(year % 4 == 0 && year % 100 != 0  || year % 400 == 0)
		printf("%d\t",year);*/
	}
	system("pause");
	return 0;
}


