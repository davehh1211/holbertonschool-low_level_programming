#include "lists.h"
/**
 * insert_nodeint_at_index - delete a head node and prints its value
 * @head: list to delete
 * @idx: index number
 * @n: value of the node
 * Return: the value of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp1, *tmp2;
	unsigned int i = 0, j = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t)); /*create the node first*/
	if (new == NULL)
		return (NULL);
	new->n = n; /*assign value*/
	tmp1 = *head; /*tmp1 point whay head points*/
	while (tmp1)
	{
		tmp1 = tmp1->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	if (idx == 0) /*if idx can iterate*/
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp1 = *head;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp2->next;
		i++;
		if (i == idx)
		{
			new->next = tmp1;
			tmp2->next = new;
			return (new);
		}
	}
	return (new);
}
