//һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ� 
//�ҳ����������֣����ʵ�֡� 

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int search(int a[], int len)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < len; i++) 
	{		
		k = 0;		
		for (j = 0; j < len; j++) 
		{			
			if (a[j] == a[i]) 
			{				
				k++;			
			}		
		}		
		if(k == 1)
		{			
			printf("%d ", a[i]);		
		}			
	}	
	printf("\n");
}

int main()
{	
	int a[] = { 1,3,5,6,1,3,5,7 };	
	int len = sizeof(a) / sizeof(a[0]);	
	
	search(a, len);	
	
	system("pause");	
	return 0;
}
