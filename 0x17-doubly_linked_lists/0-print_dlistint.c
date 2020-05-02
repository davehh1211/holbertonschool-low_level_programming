#include "lists.h"
/**
 * 
 * 
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	
	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	printf("%i", h->n);
	h = h->next;
	i++;
	printf("\n");
	return(i);
}
