//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

int number_cola(int money, int cola)
{
	int count = 0;
	while (money)
	{
		money -= 2;
		money++;
		count += 2;
		if (money == 1)
		{
			count++;
			money--;
		}

	}

	return count;

}


int main()
{
	int cola = 1;
	int money = 0;
	int num = 0;
	printf("������Ǯ��;>");
	scanf("%d", &money);

	num = number_cola(money, cola);

	printf("������%dƿ���֡�\n", num);
	system("pause");
	return 0;
}

