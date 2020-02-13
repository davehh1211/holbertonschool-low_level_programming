#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: limit.
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');

			for (b = 1; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
