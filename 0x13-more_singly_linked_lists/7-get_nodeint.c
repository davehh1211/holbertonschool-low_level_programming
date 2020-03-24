#include "lists.h"
/**
 * get_nodeint_at_index - get the nth number of the node
 * @head: the list to read
 * @index: the nth to print
 * Return: a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	/*tmp = head;*/
	if (head == NULL)
		return (NULL);
	tmp = head;
	for (i = 0; tmp != NULL; i++)
	{
		if (i == index && tmp)
		{
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (tmp);
}
