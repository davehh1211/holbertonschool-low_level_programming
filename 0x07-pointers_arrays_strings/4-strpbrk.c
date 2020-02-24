#include "holberton.h"

/**
 * _strpbrk - Write a function that locates a character in a string
 * @s: the pointer to show
 * @accept: the char to locate
 *
 * Return: character to return
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
