#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes with a specific char.
 * @size: the size of the char
 * @c: the string to be declared
 * Return: a pointer of char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
