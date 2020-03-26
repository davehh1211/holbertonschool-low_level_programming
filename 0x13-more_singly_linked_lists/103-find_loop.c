#include "lists.h"
/**
 * find_listint_loop - find a list with loops
 * @head: list to print
 * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nodeloop = head, *finder;

	if (head == NULL)
		return (NULL);
	if (head == head->next)
		return (head);
	while (nodeloop)
	{
		nodeloop = nodeloop->next;
		finder = head;
		while (nodeloop && finder != nodeloop)
		{
			if (finder == nodeloop->next)
				return (finder);
			finder = finder->next;
		}
	}
	return (nodeloop);
}
