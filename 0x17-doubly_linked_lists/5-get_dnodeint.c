#include "lists.h"
/**
 * get_dnodeint_at_index - print nth of node requested in the linked list
 * @head: the address of the head of the linked list
 * @index: requested position to print
 * Return: the address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *runner;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	runner = head;
	for (i = 0; runner != NULL; i++)
	{
		while (i == index && runner)
		{
			return (runner);
		}
		runner = runner->next;
	}
	return (runner);
}
