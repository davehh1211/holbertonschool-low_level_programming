#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @array: the array to look for into
 * @size: the size of the array
 * @cmp: the function to search
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		if ( i == 0 )
		{
			return (-1);
		}
	}
	return (0);
}
