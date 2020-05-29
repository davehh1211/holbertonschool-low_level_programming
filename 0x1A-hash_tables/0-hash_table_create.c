#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table.
 * @size: the size of the table
 * Return: the pointer of the new table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
	{
		return (NULL);
	}
	if (new_hash != NULL)
	{
		new_hash->array = malloc(sizeof(hash_node_t *) * size);
		if (!new_hash->array)
		{
			free(new_hash);
			return (NULL);
		}
	}
	new_hash->size = size;
	return (new_hash);
}
