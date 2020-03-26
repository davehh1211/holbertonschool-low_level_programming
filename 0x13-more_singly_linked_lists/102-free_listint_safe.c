#include "lists.h"
/**
 * free_listint_safe - free a list with loops
 * @h: list to free
 * Return: iteration of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (*h == NULL)
		return (0);
	tmp = *h;
	while (*h)
	{
		i++;
		tmp = *h;
		if (*h - ((*h)->next) > 0)
		{
			*h = tmp->next;
			free(tmp);
		}
		else
		{
			break;
		}
	}
	free(*h);
	*h = NULL;
	return (i);
}
