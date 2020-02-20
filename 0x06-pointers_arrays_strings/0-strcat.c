#include "holberton.h"

/**
 * _strcat - write a function that concatenates two strings
 * @dest: this case is Hello
 * @src: This case is world
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while ((dest[i++] = src[j++]) != '\0')
	{
	}
	return (dest);
}
