#include "hash_tables.h"

/**
 * key_index - gets the value of the index given
 * @key: keyword of the array
 * @size: size of the array.
 * Return: value of the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num;

	num = hash_djb2(key);
	return (num % size);
}
