//Ä£ÄâÊµÏÖstrncpy

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strncpy(char *strDest, const char *strSource, int count)
{
	char* start = strDest;
	int i = 0;

	assert(strDest != NULL);
	assert(strSource != NULL);

	while (i < count)
	{
		*start = *strSource;
		start++;
		strSource++;
		i++;
	}

	return strDest;

}


int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	int sz = strlen(arr1);

	my_strncpy(arr2, arr1, 3);

	printf("%s\n", arr2);

	system("pause");
	return 0;
}
