#include "lists.h"
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
