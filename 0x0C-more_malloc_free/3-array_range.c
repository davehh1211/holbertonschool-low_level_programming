#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: min of spaces
 * @max: maximun of spaces
 * Return: integer of spaces
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, j, len = 0;

	if (min > max)
		return (NULL);
	for (i = 0; i <= max; i++)
		len++;
	ar = malloc(sizeof(int) * len);
	if (ar == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		ar[j] = min++;

	return (ar);
}
