#include "lists.h"
/*
*
*
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	unsigned int i, sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	for (i = 0; tmp; i++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
