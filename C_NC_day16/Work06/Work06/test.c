// µœ÷memcpy 
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void* my_memcpy(void* dest, const void* src, rsize_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* d = (char*)dest;
	char* s = (char*)src;
	while (count)
	{
		*d = *s;
		d++;
		s++;
		count--;
	}
	return dest;
}

int main()
{
	char* p = "abcdef";
	char arr[20] = { 0 };

	my_memcpy(arr,p,3);

	printf("%s\n", arr);

	system("pause");
	return 0;
}