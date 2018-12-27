//模仿qsort函数的功能实现一个通用的冒泡排序
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//void buble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int flag = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			return;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = {41,2,13,4,5,26,7,38,9};
//	int sz = sizeof(arr)/sizeof(arr[1]);
//	int i = 0;
//	buble_sort(arr,sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}

//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));

extern void bubble_sort(void *base, rsize_t num, size_t width, int(const void* e1, void* e2));

void swap(void* p1, void* p2, size_t sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

int cmp(const void* a, const void* b)
{
	return (*(int*)a) - (*(int*)b);
}

void bubble_sort(void *base, rsize_t num, size_t width, int(*cmp)(const void* e1, void* e2))
{
	int i = 0;
	int j = 0;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 4, 5, 6, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	int i = 0;

	bubble_sort((void*)arr, sz, sizeof(arr[1]), cmp);

	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	

	system("pause");
	return 0;
}