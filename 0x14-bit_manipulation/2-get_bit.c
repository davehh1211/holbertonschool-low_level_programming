#include "holberton.h"
/**
 * get_bit - function to get the bit of a number
 * @n: number to evaluate
 * @index: index to get the bit
 * Return: an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, array[((sizeof(unsigned long int) * 8) - 1)];
	unsigned long int b;
	unsigned int cont = 0;

	if (n == 0)
		return (0);

	else if (n != 0)
	{
		for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
		{
			b = n >> i;
			if (b)
			{
				if (b & 1)
				{
					array[i] = 1;
					cont++;
				}
				else
				{
					array[i] = 0;
					cont++;
				}
			}
		}
	}
	if (index > cont)
		return (-1);
	return (array[index]);
}
