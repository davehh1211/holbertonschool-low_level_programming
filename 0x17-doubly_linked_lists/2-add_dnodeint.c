#include "lists.h"
/**
 * add_dnodeint - add a new node at the head of the double link
 * @head: the address of the head of the link
 * @n: the value to insert in the new node
 * Return: the address of the node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
