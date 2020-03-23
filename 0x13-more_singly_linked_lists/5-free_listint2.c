#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: list to free
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		printf("(nil)");

	tmp = *head;
	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
}
