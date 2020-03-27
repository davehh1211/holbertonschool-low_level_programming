#include "holberton.h"
/**
 * set_bit - print number binarys
 * @n: pointer
 * @index: int
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
		*n = *n | (1 << index);
		return (1);
	return (-1);
}
