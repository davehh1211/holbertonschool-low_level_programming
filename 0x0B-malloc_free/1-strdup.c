#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the size of the char
 * Return: a pointer of char
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, j, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}

	ar = malloc((len + 1) * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
