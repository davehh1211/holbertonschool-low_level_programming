#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given position
 * @head: the address of the head of the linked list
 * @index: position of node to be deleted
 * Return: 1 on success, -1 in failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	while (i < index)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		i++;
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
