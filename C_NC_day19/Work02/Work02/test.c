//strncat

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strncat(char* StrDest, const char* StrSource, int count)
{
	char* start = StrDest;
	int i = 0;
	
	assert(StrDest != NULL);
	assert(StrSource != NULL);

	while (*StrDest)
	{
		StrDest++;
	}

	while (i < count)
	{
		*StrDest = *StrSource;
		StrDest++;
		StrSource++;
		i++;

	}
	*StrDest = '\0';

	return start;
}

int main()
{
	char arr[20] = "Hello ";

	my_strncat(arr, "world! It is a good life!", 6);

	printf("%s\n", arr);

	system("pause");
	return 0;
}