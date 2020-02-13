#include "holberton.h"

/**
 * _isdigit - check the code for Holberton School students.
 * @c: limit
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
