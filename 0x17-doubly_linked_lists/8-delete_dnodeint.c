#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given position
 * @head: the address of the head of the linked list
 * @index: position of node to be deleted
 * Return: 1 on success, -1 in failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (*head == NULL || head == NULL || dlistint_len(*head) < i)
		return (-1);

	tmp = *head;
	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next; /*edge cases*/
	else if (tmp->next != NULL)
		*head = tmp->next;
	else
		*head = NULL;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev; /*edge cases*/
	free(tmp);
	return (1);
}
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
