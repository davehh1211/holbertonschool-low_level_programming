#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: list to free
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	/*if (*head == NULL) return (0);*/
	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
}
