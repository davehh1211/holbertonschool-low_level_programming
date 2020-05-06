#include "lists.h"
/**
 * sum_dlistint - add the values of each node
 * @head: the address of the head of the linked list
 * Return: the sum of the values
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0, number = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		number = head->n + number;
		head = head->next;
	}
	return (number);
}
