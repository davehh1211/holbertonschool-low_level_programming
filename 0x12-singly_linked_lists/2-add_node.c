#include "lists.h"
/**
 * add_node - add new node
 * @head: head node to be added
 * @str: new name
 * Return: pointer of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length;
	list_t *newhead;

	length = strlen(str);
	newhead = malloc(sizeof(list_t));
	if (!newhead)
		return (NULL);
	newhead->str = strdup(str);
	newhead->len = length;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
