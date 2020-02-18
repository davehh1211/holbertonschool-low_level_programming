#include "holberton.h"

/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	for (y = (x + 1) / 2; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
