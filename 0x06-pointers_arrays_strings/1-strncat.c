#include "holberton.h"
#include <unistd.h>

/**
 * _strncat - write a function that concatenates two strings
 * @s: number of bytes
 *
 * Return: On success 1.
 */

int _strlen(char *s);

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	dest_len = _strlen(dest);


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		s++;
		leng++;
	}
	return (leng);
}
