//��д����������������������в�����Ҫ������
//�ҵ��˷����±꣬�Ҳ�������-1

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int binary_search(int arry[],int key,int left,int right)
{
	int mid = 0;
	
	while (left <= right)
	{
		
		mid = left + (right - left) / 2;
		if (arry[mid] < key)
		{
			left = mid + 1;
		}
		else if (arry[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
		return -1;

	
}


int main()
{

	int arry[] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arry) / arry[0] - 1;
	int key = 6;
	int ret = 0;

	ret = binary_search(arry, key, left, right);
	if (ret >= 0)
	{
		printf("�ҵ��ˣ��±���%d\n",ret);
	}
	else
	{
		printf("�Ҳ�����\n");
	}

	system("pause");
	return 0;
}