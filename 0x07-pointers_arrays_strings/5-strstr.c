#include "holberton.h"

/**
 *
 * _strstr - Write a function that locates a substring
 *
 * @haystack: string to be evaluated
 * @needle: string to be matched
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (haystack);
		}
	}
	if (haystack == '\0')
	{
		return (haystack + i);
	}
	return (0);
}
