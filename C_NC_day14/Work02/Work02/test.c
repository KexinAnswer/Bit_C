#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
}

void Levo(char arr[], int sz)
{
	int i = 0;
	char temp = '0';
	for (i = 0; i < sz - 2; i++)
	{
		char temp = '0';
		temp = arr[i];
		arr[i] = arr[(sz-2 + i) % (sz-1)];
		arr[(sz-2 + i) % (sz-1)] = temp;
	}
}

int main()
{
	char arr[] = "abcdef";
	char *p = "bcdefa";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	
	printf("%s\n", arr);
	printf("%s\n", p);

	while (strcmp(p,arr) != 0)
	{
		Levo(arr, sz);
		count++;
	}
	if (count <= sz)
	{
		printf("·­×ªÁË%d´Î\n", count);

	}
	else
	{
		printf("×Ö·û´íÎó\n");
	}
	system("pause");
	return 0;
}