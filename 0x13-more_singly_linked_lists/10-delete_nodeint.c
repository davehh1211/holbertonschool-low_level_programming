#include "lists.h"
/**
 * delete_nodeint_at_index - free a node
 * @index: position of the node
 * @head: list to free
 * Return: 1 in success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0) /*if idx can iterate*/
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	tmp2 = tmp;
	tmp2 = tmp2->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
