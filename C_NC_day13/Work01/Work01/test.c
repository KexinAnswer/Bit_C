//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
void change(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		if (arr[left] % 2 == 1)
		{
			left++;
		}
		else
		{
			if (arr[right] % 2 == 0)
			{
				right--;
			}
			else
			{
				int temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
		}
	}

}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[9] = { 2, 4, 6, 8, 1, 3, 5, 7, 9 };
	int sz = sizeof(arr)/sizeof(arr[0]);

	change(arr,sz);

	print(arr,sz);

	system("pause");
	return 0;

}