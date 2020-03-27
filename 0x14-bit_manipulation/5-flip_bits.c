#include "holberton.h"
/**
 * flip_bits - flip the binary of a number
 * @n: number to evaluate
 * @m: number to compare
 * Return: success.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int flip = 0;

	while (num)
	{
		flip = flip + (num & 1);
		num = num >> 1;
	}
	return (flip);
}
