#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 0, b = 0, c = 0;
	double delta = 0;
	double x1 = 0, x2 = 0;
	char chr;
	char ch = 'Y';

	/*****************************
		a = 1;
		b = 5;
		c = 6;
	/*****************************/
	do
	{
		a = b = c = 0;
		printf("请输入一元二次方程的系数:\n");
		//scanf("%lf %lf %lf", &a, &b, &c);
		printf("a = ");
		scanf("%lf", &a);
		while((chr=getchar()) != '\n') 
			continue;

		printf("b = ");
		scanf("%lf", &b);
		while((chr=getchar()) != '\n') 
			continue;

		printf("c = ");
		scanf("%lf", &c);		
		while((chr=getchar()) != '\n') 
			continue;

		printf("a = %lf; b = %lf; c = %lf\n", a, b, c);

		delta = b*b - 4*a*c;

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("该方程有两个不同根:\n");
			printf("x1 = %f; x2 = %f\n",x1, x2);
		}
		else if (delta == 0)
		{
			x1 = (-b)/(2*a);
			x2 = x1,
			printf("该方程有两个相同根:\n");
			printf("x1 = x2 = %f\n", x1);
		}
		else
			printf("该方程无实数根\n");
		printf("您还要继续求解方程吗：（Y/N）\n");
		scanf(" %c", &ch); //%c前必须加写一个空格
	}while (ch=='Y' || ch=='y');

	return 0;
}

/*******************************************
时间：2015年3月31日22:55:33
目的：学习do...while，主要用于人机交互
功能：二元一次方程输入系数求根，可多次执行
其他：如果将系数的类型规定为整型则输出结果会出错，系数输入时格式也应该是%lf而不是%f
VC中的输出结果：
--------------------------------------------
请输入一元二次方程的系数:
a = 1
b = 10
c = 25
a = 1.000000; b = 10.000000; c = 25.000000
该方程有两个相同根:
x1 = x2 = -5.000000
您还要继续求解方程吗：（Y/N）
Y
请输入一元二次方程的系数:
a = 1
b = 5
c = 6
a = 1.000000; b = 5.000000; c = 6.000000
该方程有两个不同根:
x1 = -2.000000; x2 = -3.000000
您还要继续求解方程吗：（Y/N）
Y
请输入一元二次方程的系数:
a = 12
b = 16
c = 12
a = 12.000000; b = 16.000000; c = 12.000000
该方程无实数根
您还要继续求解方程吗：（Y/N）
N
Press any key to continue
--------------------------------------------
*******************************************/
