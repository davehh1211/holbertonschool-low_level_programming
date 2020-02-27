#include "holberton.h"

int sum(int i, int m);

/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 * @n: square of a number
 *
 * Return: value conditional
 *
 */
int _sqrt_recursion(int n)
{
	int j = 0;

	return (sum(j, n));
}

/**
 * sum - the operation to develop
 * @i: integer
 * @m: integer
 *
 * Return: value to multiply
 *
 */

int sum(int i, int m)
{
	if (i * i > m)
	{
		return (-1);
	}
	else if (i * i == m)
	{
		return (i);
	}
	else
	{
		return (sum(i + 1, m));
	}
}
