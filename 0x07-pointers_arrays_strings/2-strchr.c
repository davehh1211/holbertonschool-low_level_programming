#include "holberton.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: the pointer to show
 * @c: the char to locate
 *
 * Return: character to return
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
