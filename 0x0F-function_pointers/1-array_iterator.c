#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate the array according to the function
 * @array: the array to iterate
 * @size: the size of the array
 * @action: the function pointer to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
