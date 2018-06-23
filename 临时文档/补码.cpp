#include <stdio.h> 

int main(void)
{
	int i = -5;
	int j = 0XFFFFFFF5;

	printf("%#X\n",i);
	printf("%d\n",j);

	return 0;
}