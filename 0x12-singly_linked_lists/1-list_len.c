#include "lists.h"
/**
 * list_len - print number of nodes
 * @h: list
 *  Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
			h = h->next;
	}
	return (i);
}
