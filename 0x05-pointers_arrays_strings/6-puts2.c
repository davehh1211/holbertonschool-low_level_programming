#include "holberton.h"

/**
 * puts2 - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x % 2 == 0)
		{
		_putchar(str[x]);
		}
	}
	_putchar('\n');
}
