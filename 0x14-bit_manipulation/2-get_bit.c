#include "holberton.h"
/**
 * get_bit - function to get the bit of a number
 * @n: number to evaluate
 * @index: index to get the bit
 * Return: an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	t <<= index;
	if (t & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
