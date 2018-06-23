#include <stdio.h>

int main(void)
{
	int i;
	int sum_odd = 0, sum_even = 0;
	int flag_odd = 0, flag_even = 0;
	double ave_odd, ave_even;

	for (i=1; i<=100; i++)
	{
		if (i%2 == 1)
		{
			sum_odd += i;
			flag_odd++;
		}
		else
		{
			sum_even += i;
			flag_even++;
		}
	}
	ave_odd = sum_odd*1.0/flag_odd;
	ave_even = sum_even*1.0/flag_even;

	printf("flag_odd = %d\n", flag_odd);
	printf("sum_odd = %d\n", sum_odd);
	printf("ave_odd = %f\n", ave_odd);
	printf("flag_even = %d\n", flag_even);
	printf("sum_even = %d\n", sum_even);
	printf("ave_even = %f\n", ave_even);

	return 0;
}

/**************************************************************************
ʱ�䣺2015��4��10��23:34:08
Ŀ�ģ���ϰforѭ�����
���ܣ���1��100֮�������������ż�������������ͣ�ż���ͣ�����ƽ��ֵ��ż��ƽ��ֵ
��������
��VC�е�������Ϊ��
---------------------------------------------------------------------------
flag_odd = 50
sum_odd = 2500
ave_odd = 50.000000
flag_even = 50
sum_even = 2550
ave_even = 51.000000
Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/