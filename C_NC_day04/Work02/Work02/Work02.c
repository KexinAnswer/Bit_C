//���0-999֮������С�ˮ�ɻ����������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ������ͣ�ȴ�õ��ڸ���������:153 = 1+5+3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;


	for (i = 100; i <= 999; i++)
	{

		//Ƕ��forѭ��
		a = i / 100;
		b = (i - 100 * a) / 10;
		c = i - 100 * a - 10 * b;
		sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

		if (i == sum)
		{
			printf("%d\t", i);
		}
	}

	system("pause");
	return 0;
}