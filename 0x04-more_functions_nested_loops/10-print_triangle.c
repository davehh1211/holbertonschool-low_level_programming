#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: limit.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a, b, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
			{
				_putchar(' ');
			}
			for (x = 0; x < a; x++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
