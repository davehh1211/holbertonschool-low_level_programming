#include "lists.h"
/**
 * print_listint_safe - print a list with loops
 * @head: list to print
 * Return: iterations
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - (head->next) > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}	
	}
	return (i);
}
