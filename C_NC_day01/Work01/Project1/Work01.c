//打印出100-200之间的素数
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 200; i++)
//	{
//		int count = 0;
//		for (int j = 2; j <= i/2; j++)
//		{
//			
//			if (i%j == 0)
//				count++;
//			
//		}
//		if (count < 1)
//			printf("%d\t", i);
//	}
//	system("pause");
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i , j;
	for (i = 101; i <= 200; i=i+2)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}

		}
		if (j>sqrt(i))
		{
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}
