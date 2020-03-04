#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concat several strigns from arguments
 * @ac: number of arguments
 * @av: the string of arguments
 * Return: a pointer of grid
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, count = 0;
	char *p1;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			count++;
		}
	}
	p1 = malloc(sizeof(char *) * count + ac + 1);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p1[n] = av[i][j];
			n++;
		}
		p1[n] = '\n';
		n++;
	}
	return (p1);
}
