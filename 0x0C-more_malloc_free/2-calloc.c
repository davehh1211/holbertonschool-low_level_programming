#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array
 * @nmemb: variable
 * @size: size of the array
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *av;

	if (nmemb == 0 || size == 0)
		return (NULL);

	av = malloc(nmemb * size);

	for (i = 0; i < (nmemb * size); i++)
	{
		av[i] = '\0';
	}
	return (av);
}
