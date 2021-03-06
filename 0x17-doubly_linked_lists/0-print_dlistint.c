#include "lists.h"
/**
 * print_dlistint - print the nodes of a double linked list
 * @h: node to print in the interation
 * Return: the number of iterations
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
