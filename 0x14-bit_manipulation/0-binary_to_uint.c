#include "holberton.h"
/**
 * binary_to_uint - converto binary to integers
 * @b: binary number
 * Return: integer converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	while (i >= 0)
	{
		n += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (n);
}
