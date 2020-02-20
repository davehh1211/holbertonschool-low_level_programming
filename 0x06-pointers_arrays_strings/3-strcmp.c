#include "holberton.h"

/**
 * _strcmp - write a function that concatenates two strings
 * @s1: this case is Hello
 * @s2: This case is world
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; (s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	}

	return (s1[i] - s2[i]);
}
