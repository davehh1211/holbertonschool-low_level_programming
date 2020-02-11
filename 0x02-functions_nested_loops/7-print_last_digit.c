#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @x: The character to print
 *
 * Return: Always 0.
 */
int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
	{
		x = x * -1;
		_putchar(x + '0');
		return (x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
