#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, p, o;

	for (n = '0' ; n <= '9'; n++)
	{
		for (m = '0'; m <= '8'; m++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				for (o = p + 1; o <= '9'; o++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(o);
					putchar(p);
					if ((n != '9') || (m != '8') || (p != '9') || (o != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
