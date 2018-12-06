// µœ÷strstr
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strstr(char* string, const char* strCharSet)
{
	
	assert(string != NULL);
	assert(strCharSet != NULL);

	char* start = string;
	char* src = strCharSet;

	while (string != '\0')
	{
		start = string; 
		src = strCharSet;

		while (*start == *src && *src != '\0')
		{
			start++;
			src++;
		}
		if (*src == '\0')
		{
			return string;
		}
		
		string++;

	}
	return NULL;
}

int main()
{
	char arr[] = "abbbcdef";
	char* ret = NULL;

	ret = my_strstr(arr, "bc");

	if (ret)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("Not Found!");
	}

	system("pause");
	return 0;
}