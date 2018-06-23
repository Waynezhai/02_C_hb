#include <stdio.h>

void sort(int * a, int len)
{
	int i = 0, j = 0, t = 0;
	for(i = 0; i < len - 1; i++)
	{
		for(j = 0; j < len - 1 - i;j++)
		{
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

int main(void)
{
	int i = 0;
	int a[6] = {6, 9, -12, 3, 14, 0};
	sort(a, 6);

	for(i=0; i < 6; i++)
	{
		printf("%6d", a[i]);
	}
	printf("\n");

	return 0;
}