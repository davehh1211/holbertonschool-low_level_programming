#include "lists.h"
/**
 * pop_listint - delete a head node and prints its value
 * @head: list to delete
 * Return: the value of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		printf("(nil)");

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
