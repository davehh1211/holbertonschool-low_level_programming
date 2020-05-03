#include "lists.h"
/**
 * sum_dlistint - add the values of each node
 * @head: the address of the head of the linked list
 * Return: the sum of the values
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *tmp, *newnode;

	if (idx > dlistint_len(*h) || idx < 1 ) /*not defined*/
		return (NULL);
	/*if head is null or first node next is null*/
	if (h == NULL || (*h)->next == NULL || idx == 1)
		return ((add_dnodeint(h, n)));
	if (idx == dlistint_len(*h)) /*if pos is the last*/
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
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
