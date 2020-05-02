#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of the double link
 * @head: the address of the head of the link
 * @n: the value to insert in the new node
 * Return: the address of the node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newendnode;
	dlistint_t *last = *head;

	newendnode = malloc(sizeof(dlistint_t));
	if (!newendnode)
	{
		return (NULL);
	}
	newendnode->n = n;
	newendnode->next = NULL;
	if ((*head) == NULL) /*if list is empty make new node*/
	{
		newendnode->prev = NULL;
		*head = newendnode;
		return (newendnode);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newendnode;
	newendnode->prev = last;

	return (newendnode);
}
