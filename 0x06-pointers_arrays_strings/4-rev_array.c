#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: The character to print
 * @n: the character to print
 *
 * Return: nothing.
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int x;
	int z = 0;
	int t[1000000];

	for (i = 0; i <= n; i++)
	{
		t[i] = a[i];
	}
	for (x = n - 1; x >= 0; x--)
	{
		a[x] = t[z];
		z++;
	}
}
