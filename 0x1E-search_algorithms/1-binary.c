#include "search_algos.h"
/**
 * printarr - prints the array
 * @array: array to be printed
 * @size: the full size of the array
 * Return: nothing
 */
void printarr(int *array, int size)
{
	int a = 0;

	printf("Searching in array:");
	for (a = 0; a < size; a++)
	{
		printf(" %d", array[a]);
		if (a != size - 1)
			printf(",");
	}
	printf("\n");
}
/**
 * binary_search - Write a function that searches
 * for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array:  is a pointer to the first element of the
 * array to search in
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: the index of the found value
 */
int binary_search(int *array, size_t size, int value)
{
	if (array != NULL || size > 0)
	{
		size_t low = 0;
		size_t high = size - 1;

		while (low <= high)
		{
			size_t middle = (low + high) / 2;

			printarr(array + low, high + 1 - low);
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
			{
				low = middle + 1;
			}
			else if (array[middle] > value)
			{
				high = middle - 1;
			}
		}
	}
	return (-1);
}
