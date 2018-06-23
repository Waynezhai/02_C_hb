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
时间：2015年4月6日21:37:58
目的：练习if语句和数值交换
功能：将输入的三个整型值升序输出
其他：排序方法很多，在数组后练习冒泡法
在VC中的输出结果为：
---------------------------------------------------------------------------
Please input 3 integer and separate them in Space key:
12 34 1325
After sorting, the order is:
12 34 1325
3Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/