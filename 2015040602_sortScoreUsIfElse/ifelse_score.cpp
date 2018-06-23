#include <stdio.h>

int main(void)
{
	float score;

	printf("Please input your score:");
	scanf("%f", &score);

	if (score>100 || score<0)
		printf("You have input a wrong number. Please check it!\n");
	else if (score>=85 && score<=100)
		printf("Congratulations! You got an A!\n");
	else if (score>=75 && score<85)
		printf("Good news! You got a B!\n ");
	else if (score>=60 && score<75)
		printf("You got a C and need more effort!\n");
	else
		printf("Bad news. You're fail to pass this exam!\n");

	return 0;
}

/********************************************************************
时间：2015年4月6日19:46:44
目的：练习if...else...的选择流程
功能：输入一个成绩，并判断成绩的等级
在VC中的输出结果：
---------------------------------------------------------------------
Please input your score:85
Congratulations! You got an A!
Press any key to continue
---------------------------------------------------------------------
********************************************************************/