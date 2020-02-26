#include "holberton.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s: The character to print
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
