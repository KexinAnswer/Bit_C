//将数组A中的内容和数组B中的内容进行交换

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int arry1[5] = {1,2,3,4,5};
	int arry2[5] = {5,4,3,2,1};
	for (int i = 0; i < 5; i++)
	{
		arry1[i] = arry1[i] ^ arry2[i];
		arry2[i] = arry1[i] ^ arry2[i];
		arry1[i] = arry1[i] ^ arry2[i];
	}
	for (int j = 0; j < 5; j++)
	{
		printf("%d\t",arry1[j]);
	}

	printf("\n");

	for (int k = 0; k < 5; k++)
	{
		printf("%d\t",arry2[k]);
	}
	system("pause");

	return 0;
}