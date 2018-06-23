#include <stdio.h>

int main(void)
{
	int num_pos;
	int num_nag = 0;
	int mid;

	printf("Please input the number which you want to check: num_pos = ");
	scanf("%d", &num_pos);

	mid = num_pos;
	while (mid)
	{
		num_nag = num_nag*10 + mid%10;
		mid /= 10;
	}
	printf("num_nag = %d\n", num_nag);

	if (num_nag == num_pos)
		printf("Your number is a palindromic number !\n");
	else
		printf("Your number is not a palindromic number !\n");

	return 0;
}

/**************************************************************************
ʱ�䣺2015��4��21��23:05:26
Ŀ�ģ���ϰwhile���
���ܣ����һ�������ǲ��ǻ�����
�������㷨˼��--��һ����������д���ж��Ƿ���ԭ��������ͬ����
��VC�е�������Ϊ��
---------------------------------------------------------------------------
Please input the number which you want to check: num_pos = 12344321
Your number is a palindromic number !
Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/