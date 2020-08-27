#include "search_algos.h"
/**
 * interpolation_search - searches a value using interpolation
 * @array:  is a pointer to the first element of the
 * array to search in
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: the index of the found value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos;
	size_t high = size - 1;

	while(value <= array[high] && value >= array[low] && low <= high)
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
				return (pos);
			else if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
