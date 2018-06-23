# include <stdio.h>

int main(void)
{
	if (3 > 1)
		printf("AAAA\n");

	if (0)
		printf("BBBB\n");
	
	if (0 == 0)
		printf("CCCC\n");

	return 0;
}

/*******************************
时间：2015年4月2日22:44:16
目的：认识if选择
功能：判断真假输出四个字符
其他：无
VC中的输出结果：
--------------------------------
AAAA
CCCC
Press any key to continue
--------------------------------
*******************************/