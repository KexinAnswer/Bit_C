//����һ�����飬
//ʵ�ֺ���init()��ʼ������
//ʵ��empty()�������
//ʵ��reverse()�����������Ԫ�ص�����
//Ҫ���Լ���ƺ����Ĳ���������ֵ
//δ���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5


void init(int arr[N])
{
	int i = 0;
	printf("��Ҫ����%d����\n",N);
	for (i = 0; i < N; i++)
	{
		printf("�������%d����\n",i+1);
		scanf("%d", &arr[i]);
	}
}

void reverse(int arr[N])
{
	int i = 0;
	int temp = 0;

	printf("�������ú��˳���ǣ�\n");
	for (i = 0; i < N / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[N - i - 1];
		arr[N - i - 1] = temp;
	}
}

void empty(int arr[N])
{
	int i = 0;

	for (i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
	printf("������飺\n");
}

void print(int arr[N])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[N] = {0};

	init(arr);
	print(arr);

	reverse(arr);
	print(arr);

	empty(arr);
	print(arr);

	system("pause");
	return 0;
}