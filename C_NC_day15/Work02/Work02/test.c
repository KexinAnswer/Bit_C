//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

int number_cola(int money, int cola)
{
	int count = 0;
	while (money)
	{
		money -= 2;
		money++;
		count += 2;
		if (money == 1)
		{
			count++;
			money--;
		}

	}

	return count;

}


int main()
{
	int cola = 1;
	int money = 0;
	int num = 0;
	printf("请输入钱数;>");
	scanf("%d", &money);

	num = number_cola(money, cola);

	printf("可以买%d瓶可乐。\n", num);
	system("pause");
	return 0;
}

