#include "hash_tables.h"
/**
* hash_djb2 - get the index of a hash table
* @str: the string to be calculated
* Return: hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
