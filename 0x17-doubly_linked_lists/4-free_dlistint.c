#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free a linked list until null
 * @head: the address of the head (list) to be freed
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
