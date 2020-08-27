#include "search_algos.h"
#include <math.h>
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
 * jump_search - Write a function that searches for
 * a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: the value to be found
 * Return: the index where valued is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t step = sqrt(size);

	if (size > 0 && array != NULL) /*done*/
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		while (array[step] < value && step < size)
		{
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
			start = step;
			step += sqrt(size);
			if ((int)start >= value)
				break;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", start, step);

		while (start <= valuemin(size - 1, step) && array[start] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
			if (array[start] == value)
				return (start);
			start++;
		}
	}
	return (-1);
}
