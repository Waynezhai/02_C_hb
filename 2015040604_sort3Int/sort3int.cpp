#include <stdio.h>

int main(void)
{
	int a, b, c;
	int t;

	printf("Please input 3 integer and separate them in Space key:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf("After sorting, the order is:\n");
	printf("%d %d %d\n3", a, b, c);

	return 0;
}

/**************************************************************************
ʱ�䣺2015��4��6��21:37:58
Ŀ�ģ���ϰif������ֵ����
���ܣ����������������ֵ�������
���������򷽷��ܶ࣬���������ϰð�ݷ�
��VC�е�������Ϊ��
---------------------------------------------------------------------------
Please input 3 integer and separate them in Space key:
12 34 1325
After sorting, the order is:
12 34 1325
3Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/