#include "lists.h"
/**
 * free_list - free the list
 * @head: list to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
