#include "holberton.h"

/**
 * _print_rev_recursion - Write a function that prints a string
 * @s: The character to print
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
