#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
/*Check the index of where the key is located*/
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			if (ptr->value)/*checks if there is asociated to that key*/
				free(ptr->value);/*free that value and*/
			ptr->value = strdup(value);/*update the value*/
			if (!ptr->value)/*checks if no problem with malloc within strdup*/
				return (0);
			return (1);/*return success*/
		}
		ptr = ptr->next;/*help the loop to advance to the next node*/
	}
	new_node = malloc(sizeof(hash_node_t)); /*In case of collision, add node */
	if (!new_node)
		return (0);
	new_node->key = strdup(key);/*Now we will assgin */
	if (!new_node->key)/*checks if no problem with malloc within strdup*/
	{ free(new_node);
	return (0); }
	new_node->value = strdup(value);
	if (!new_node->value)/*checks if no problem with malloc within strdup*/
	{ free(new_node->key);
	free(new_node);
	return (0); }
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
