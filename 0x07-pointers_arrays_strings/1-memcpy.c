#include "holberton.h"

/**
 * _memcpy - Write a function that copies memory area
 * @dest: destination to be copied in
 * @src: data to copy
 * @n: times to show
 *
 * Return: character to return
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
