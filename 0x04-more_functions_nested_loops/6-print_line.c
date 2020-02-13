#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: limit.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int a;
	int b = '_';

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		_putchar(b);
	}
	_putchar('\n');
}
