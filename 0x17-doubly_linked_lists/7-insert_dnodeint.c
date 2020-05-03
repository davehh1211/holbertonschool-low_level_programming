#include "lists.h"
/**
 * insert_dnodeint_at_index - insert nodes in given position
 * @h: the address of the head of the linked list
 * @idx: position
 * @n: value of the new node
 * Return: the node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *tmp, *newnode;

	if ((idx > dlistint_len(*h)) || (*h == NULL && idx != 0)) /*not defined*/
		return (NULL);
	/*if head is null or first node next is null*/
	if (*h == NULL || (*h)->next == NULL)
		return (add_dnodeint(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == dlistint_len(*h))
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		while (i < idx)
		{
			tmp = tmp->next;
			i++;
		}
	}
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next = newnode;
	newnode->next->prev = newnode;
	return (*h);
}
/**
 * dlistint_len - print the number of iterations
 * @h: the node to iterate
 * Return: the number of iterations.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
