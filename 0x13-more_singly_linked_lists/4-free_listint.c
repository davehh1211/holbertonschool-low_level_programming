#include "lists.h"
/**
 * free_listint - free the list
 * @head: list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}