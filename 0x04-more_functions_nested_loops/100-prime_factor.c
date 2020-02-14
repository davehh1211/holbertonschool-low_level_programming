#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(void)
{
	long int a = 612852475143;
	int div = 2;
	long int num = a;

	while (num != 1)
	{
		if (num % div == 0)
		{
			if (num % num == 0)
			{
				num = num / div;
			}
		}
		else
		{
			div++;
		}
	}
		printf("%d\n", div);
		return (0);
}
