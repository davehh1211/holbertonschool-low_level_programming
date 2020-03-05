#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: var to be asigned
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
