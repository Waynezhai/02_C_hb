#include <stdio.h>

int main(void)
{
	int i, j;
	char ch;

	printf("请输入整数i：\n");
	scanf("%d", &i);
	printf("i = %d\n", i);

	while ((ch=getchar()) != '\n')
	continue;

	printf("请输入整数j：\n");
	scanf("%d", &j);
	printf("j = %d\n", j);

	return 0;
}

/************************************
时间：2015年3月25日23:53:08
功能：先后键入两个整数并显示
目的：学习多scanf输入时的校验程序，while行，可避免i后有无效字符输入
其他：多积累实用的识记代码
VC中的输出结果：
--------------------------------------
	请输入整数i：
	15dsfasd
	i = 15
	请输入整数j：
	124jk
	j = 124
	Press any key to continue
--------------------------------------
************************************/