#include <stdio.h>


void converse(int * p,int * q)
{
	*p = 13;
	*q = 15;
	
	return;
}

int main(void)
{
	int a = 3;
	int b = 5;

	converse(&a, &b);

	printf("a = %d, b= %d\n", a, b);

	return 0;
}