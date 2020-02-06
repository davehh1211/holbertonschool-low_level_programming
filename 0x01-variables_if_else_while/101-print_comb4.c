#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, p;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (p = m + 1; p <= '9'; p++)
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if ((n != '7') || (m != '8') || (p != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
