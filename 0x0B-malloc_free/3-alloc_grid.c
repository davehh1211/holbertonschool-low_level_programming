#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a newly allocated space in memory
 * @width: the size of the columns
 * @height: the sizer of the rows
 * Return: a pointer of char
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, h;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ar = (int **)malloc(sizeof(int *) * width);

	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * height);
		if (ar[i] == NULL)
		{
			for (h = 0; h >= i; h--)
			{
				free(ar[h]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
