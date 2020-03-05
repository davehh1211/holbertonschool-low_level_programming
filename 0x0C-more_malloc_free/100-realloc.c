#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Write a function that reallocates a memory block
 * @ptr: pointer to reallocate
 * @old_size: array to reallocate
 * @new_size: the size to reallocate
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *a, *aux;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		a = malloc(sizeof(int) * (new_size));
		if (a == NULL)
		{
			return (NULL);
		}
		return (a);
	}
	a = malloc(sizeof(int) * (new_size));
	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}
	aux = ptr;
	for (x = 0; x < new_size && x < old_size; x++, aux++)
		a[x] = *aux;
	free(ptr);
	return (a);
}
