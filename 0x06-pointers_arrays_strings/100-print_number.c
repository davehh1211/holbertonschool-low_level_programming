#include "holberton.h"

/**
 * print_number - write a function that concatenates two strings
 * @n: this is an integer
 *
 *
 */
void print_number(int n)
{
	unsigned int l;

	if (n < 0)
	{
		l = -n;
		_putchar('-');
	}
	else
	{
		l = n;
	}
	if (l / 10)
	{
		print_number(l / 10);
	}
	_putchar(l % 10 + '0');
}
