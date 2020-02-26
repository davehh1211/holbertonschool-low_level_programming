#include "holberton.h"

/**
 * factorial - returns the factorial of a given numbe
 * @n: The integer to calculate
 *
 * Return: an integer.
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
