#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int x)
{
	x = x % 10;
	_putchar( x + '0');
	return(x);
}
