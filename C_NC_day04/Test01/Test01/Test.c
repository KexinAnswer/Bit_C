

#include <stdio.h>
#include <stdlib.h>




//折半查找法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int key = 6;
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid+1;
//			
//		}
//
//		else if (arr[mid] > key)
//		{
//			right = mid-1;
//			
//		}
//		else
//		{
//			printf("找到了，下表是%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了！\n");
//	}
//
//
//	system("pause");
//	return 0;
//}