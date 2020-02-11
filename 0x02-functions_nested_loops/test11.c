#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a=0;

	while ( a < 2 )
	{
		int b=0;
		while ( b < 3 )
		{
			_putchar( a + '0');
			_putchar( b + '0');
			_putchar(':');
			b++;

			int c=0;
			while ( c < 5 )
			{
				int d=0;
				while ( d < 9 )
				{
					_putchar( c + '0');
				        _putchar( d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
		}
		a++;
	}
}
