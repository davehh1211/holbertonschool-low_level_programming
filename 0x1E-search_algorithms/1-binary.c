#include "search_algos.h"
/**
 * printarr - prints the array
 * @array: array to be printed
 * @size: the full size of the array
 * Return: nothing
 */
void printarr(int *array, int size)
{
	int i = 0;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %i", array[i]);
		if (i != size - 1)
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
	if (value > (int)size || array != NULL)
	{
		int low = 0;
		int high = size - 1;

		printarr(array, high + 1);
		while (low < high)
		{
			int middle = (low + high) / 2;
			/*printf("%i\n", middle);*/
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
			{
				low = middle + 1;
				/*printf("higher\n");*/
				/*printf("%i - %i\n", low, high);*/
				/*printarr(array + low, high + 1 - low);*/
				/*return (low);*/
			}
			else if (array[middle] > value)
			{
				high = middle - 1;
				/*printf("lower\n");*/
				/*printf("%i - %i\n", low, high);*/
				/*printarr(array, high + 1);*/
				/*return (high);*/
			}
			/*printf("some");*/
			printarr(array + low, high + 1 - low);
			/*return (30);*/
		}
	}
	return (-1);
}
