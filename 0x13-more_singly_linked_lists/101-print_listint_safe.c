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
		exit(98);
	while (head != NULL)
	{
		if (head - (head->next) > 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			i++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (i);
}
