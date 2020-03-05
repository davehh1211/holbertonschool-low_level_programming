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
	char *ar;
	unsigned int i;
	void *av;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	for (i = 0; i < size; i++)
	{
		ar[i] = nmemb;
	}
	av = ar;
	return (av);
}
