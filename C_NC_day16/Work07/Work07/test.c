// µœ÷memmove
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* d = (char*)dest;
	char* s = (char*)src;

	if (s > d)
	{
		while (count)
		{
			*(d + count - 1) = *(s + count - 1);
			count--;

		}
	}
	else
	{
		while (count)
		{
			*s = *d;
			s++;
			d++;
			count--;
		}
	}
	return dest;

}


int main()
{
	char arr1[30] = "abcdef";

	my_memmove(arr1, arr1 + 3, 3);

	printf("%s\n", arr1);

	system("pause");
	return 0;
}