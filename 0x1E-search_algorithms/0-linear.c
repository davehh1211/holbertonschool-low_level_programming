#include "search_algos.h"
/**
 * linear_search - Write a function that searches
 * for a value in an array of integers using
 * the Linear search algorithm.
 * @array:  is a pointer to the first element of
 * the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: an integer
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}