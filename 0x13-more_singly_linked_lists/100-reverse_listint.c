#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: list to reverse
 * Return: the reversed head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = curr;
		curr = *head;
		*head = next;
	}
	*head = curr;
	return (*head);
}
