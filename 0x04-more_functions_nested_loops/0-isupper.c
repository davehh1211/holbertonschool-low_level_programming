#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: limit
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
