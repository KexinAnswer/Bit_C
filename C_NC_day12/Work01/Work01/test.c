//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int n = value;
	int count = 31;
	unsigned int sum = 0;

	while (n)
	{
		sum += pow(n % 2 * 2, count);
		n /= 2;
		count--;
	}

	return sum;
}



int main()
{
	unsigned int num = 0;
	unsigned int ret = 0;

	printf("��������һ��������");
	scanf("%d", &num);
	
	ret = reverse_bit(num);

	printf("��ת���ֵΪ:>%u\n",ret);

	system("pause");
	return 0;

}