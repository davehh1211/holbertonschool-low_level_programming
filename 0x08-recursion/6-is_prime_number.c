#include "holberton.h"

int sum(int i, int m);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: square of a number
 *
 * Return: value conditional
 *
 */
int is_prime_number(int n)
{
	int j = 2;

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
	if (m == i)
	{
		return (1);
	}
	else if (m < i)
	{
		return (0);
	}
	else if (m % i == 0 && i < m)
	{
		return (0);
	}
	return (sum(i + 1, m));

}
