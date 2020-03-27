#include "holberton.h"
/**
 * set_bit - print number binarys
 * @n: pointer
 * @index: int
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0x01;

	if (n == NULL)
		return (-1);
	if (index > 64)
		return (-1);
	num <<= index;
	*n = *n | num;
	return (1);
}
