#include "hash_tables.h"
/**
 * hash_table_print - it prints a hash table
 * @ht: hash table
 * Return: the printing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int size, c = 0;

	size = ht->size;
	if (!ht)
	{
		return;
	}
	printf("{"); /*fix mistake*/
	for (i = 0; i < size; i++)
	{
		while (ht->array[i])
		{
			if (c == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			c = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
