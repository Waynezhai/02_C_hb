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
ʱ�䣺2015��4��6��19:46:44
Ŀ�ģ���ϰif...else...��ѡ������
���ܣ�����һ���ɼ������жϳɼ��ĵȼ�
��VC�е���������
---------------------------------------------------------------------
Please input your score:85
Congratulations! You got an A!
Press any key to continue
---------------------------------------------------------------------
********************************************************************/