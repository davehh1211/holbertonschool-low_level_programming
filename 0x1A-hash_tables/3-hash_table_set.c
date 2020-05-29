#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: keyword
 * @value: value to be added
 * Return: 1 in success, 0 in failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode;
	hash_node_t *ptr;

	if (key == NULL || (*key) == '\0' || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			if (ptr->value)
				free(ptr->value);
			ptr->value = strdup(value);
			if (!ptr->value)
				return (0);
			return (1);
			ptr = ptr->next;
		}
	}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	if (!newnode->key)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (!newnode->value)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;
	return (1);
}
