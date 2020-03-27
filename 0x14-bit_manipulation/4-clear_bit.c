#include "holberton.h"
/**
 * clear_bit - change the bit of a value
 * @n: number to evaluate
 * @index: number of position
 * Return: success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int num = 0x01;

	if (n == NULL)
		return (-1);
	if (index > 64)
		return (-1);
	num <<= index;
	*n = *n & ~num;
	return (1);
}
