//��дһ������reverse_string(char* string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��C�������е��ַ�����������

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* string)
{
	if (*string)
	{
		char* start = string;
		char* end = string + my_strlen(string) - 1;
		char temp = *start;
		*start = *end;
		*end = '\0';
		reverse_string(start + 1);
		*end = temp;

	}
}

int main()
{
	char str[] = "abcd";
	reverse_string(str);

	printf("%s\n",str);
	
	system("pause");
	return 0;
}