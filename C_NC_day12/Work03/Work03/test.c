//���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5, 5 };
	int temp = arr[0];
	int i = 0;

	for (i = 1; i < 9; i++)
	{
		temp = arr[i] ^ temp;
	}
	printf("%d\n",temp);


	system("pause");
	return 0;
}