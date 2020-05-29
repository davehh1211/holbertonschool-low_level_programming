#include "hash_tables.h"
/**
 * hash_table_get - get the value of a key
 * @ht: hash table
 * @key: key to get the value from
 * Return: the value, NULL if there is nothing.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
	}
	return (NULL);
}
