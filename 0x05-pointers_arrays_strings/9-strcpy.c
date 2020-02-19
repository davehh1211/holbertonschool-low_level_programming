#include "holberton.h"

/**
* *_strcpy - writes the character c to stdout
* @dest: The character to print
* @src: source of char
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0; src[r] != '\0'; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = '\0';
	return (dest);
}
