#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of two diagonals
 * @a: array, chessboard
 * @size: size of the matrix
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int y = 0, z = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		y += a[i];
	}
	for (i = size - 1; i < s - 1; i += size - 1)
	{
		z += a[i];
	}
	printf("%d, %d\n", y, z);
}
