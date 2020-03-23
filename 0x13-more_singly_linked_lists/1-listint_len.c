#include "lists.h"
/**
* listint_len - print the number of ocurrences in printing
* @h: list to print
* Return: print number of iterations
*/
size_t listint_len(const listint_t *h)
{
	int n = 0, i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		n++;
	}
	return (n);
}
