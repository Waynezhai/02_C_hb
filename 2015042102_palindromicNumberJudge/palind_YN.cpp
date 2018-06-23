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
时间：2015年4月21日23:05:26
目的：练习while语句
功能：检查一个数字是不是回文数
其他：算法思想--把一个数反过来写，判断是否与原来的数相同即可
在VC中的输出结果为：
---------------------------------------------------------------------------
Please input the number which you want to check: num_pos = 12344321
Your number is a palindromic number !
Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/