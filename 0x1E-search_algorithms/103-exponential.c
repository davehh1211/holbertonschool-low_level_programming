#include "search_algos.h"
/**
 * valuemin - return the minimum value between two numbers
 * @i: value one
 * @j: value two
 * Return: the minimum value
 */
size_t valuemin(size_t i, size_t j)
{
	if (j < i)
		return (j);
	return (i);
}

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
 * binary_search_2 - Write a function that searches
 * for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array:  is a pointer to the first element of the
 * array to search in
 * @low: lowest number of elements in the array
 * @high: highest number of elements in the array
 * @value: the value to be searched for
 * Return: the index of the found value
 */
int binary_search_2(int *array, size_t low, size_t high, int value)
{
	if (array != NULL || high > 0)
	{

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
/**
 * exponential_search - search a value with exponetial search
 * @array:  is a pointer to the first element of the
 * array to search in
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: the position of the value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1, pas;

	if (array != NULL || size > 0)
	{
		while (pos < size && array[pos] <= value)
		{
			printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
			if (array[pos] <= value)
				pos = pos * 2;
		}
		pas = valuemin(size - 1, pos);
		printf("Value found between indexes [%lu] and [%lu]\n", pos / 2, pas);
		return (binary_search_2(array, pos / 2, pas, value));
	}
	return (-1);
}
