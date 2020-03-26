#include "lists.h"
/**
 * find_listint_loop - find a list with loops
 * @head: list to print
 * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nodeloop;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (head - (head->next) > 0)
		{
			head = head->next;
		}
		else
		{
			nodeloop = head->next;
			return (nodeloop);
		}
	}
	return (NULL);
}
