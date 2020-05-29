#include "hash_tables.h"
/**
 * listfree - free the list in a hash list
 * @head: the list to be free
 * Return: nothing
 */
void listfree(hash_node_t *head)
{
	hash_node_t *temp, *aux;


	temp = head;
	if (head)
	{
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			aux = temp->next;
			free(temp);
			temp = aux;
		}
	}
}
/**
 * hash_table_delete - delete and array - hash table
 * @ht: the array to be deleted
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0, size;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
			listfree(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
