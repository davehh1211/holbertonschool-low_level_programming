#include "lists.h"
/**
* print_listint - prints all the elements of a listint_t list.
* @h: list to print
* Return: print number of iterations
*/
size_t print_listint(const listint_t *h)
{
	int n = 0, i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
