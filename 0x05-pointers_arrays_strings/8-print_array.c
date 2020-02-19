#include "holberton.h"
#include <stdio.h>

/**
 * print_array - writes the character c to stdout
 * @a: The character to print
 * @n: The times it repeats
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (t != (n - 1))
		{
			printf("%d, ", a[t]);
		}
		else
		{
			printf("%d", a[t]);
		}
	}
	printf("\n");
}
