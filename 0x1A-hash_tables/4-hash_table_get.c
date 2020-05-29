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
	hash_node_t *runner;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	runner = ht->array[index];
	while (runner)
	{
		if (strcmp(runner->key, key) == 0)
			return (runner->value);
		runner = runner->next;
	}
	return (NULL);
}
