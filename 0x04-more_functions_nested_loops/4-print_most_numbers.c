#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		_putchar(a + '0');
	}
	_putchar('\n');
}
