#include "holberton.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: the pointer to show
 * @b: The constant byte
 * @n: times to show
 *
 * Return: character to return
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;
	unsigned int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		s[len + i] = b;
	}
	return (s);
}
