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
	int j = 0;

	while (s1[i] == s2[j])
	{
		i++;
		j++;
		return (0);
	}
	return (s1[i] - s2[j]);
}
