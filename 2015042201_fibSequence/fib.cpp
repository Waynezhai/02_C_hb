#include <stdio.h>

int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int fn;
	int n;
	int i;

	printf("Please input the number which you want : n = ");
	scanf("%d", &n);

	printf("The number you want is : ");
	if (n == 1)
		printf("f%d = %d\n", n, f1);
	else if (n == 2)
		printf("f%d = %d\n", n, f2);
	else
	{
		for (i=3; i<=n; i++)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
		printf("f%d = %d\n", n, fn);
	}

	return 0;
}

/**************************************************************************
ʱ�䣺2015��4��22��09:02:40
Ŀ�ģ��㷨��Ϥ��쳲��������У��ݹ�
���ܣ�1,2,3,5,8,13,21�������������еĵ�n��
����������ۺ������㷨
��VC�е�������Ϊ��
---------------------------------------------------------------------------
Please input the number which you want : n = 7
The number you want is : f7 = 21
Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/