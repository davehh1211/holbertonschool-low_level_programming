#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @n: The character to print
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
