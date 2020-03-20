#include "lists.h"
int _strlen(const char *s);
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(const char *s)
{
	int leng;

	while (*s != '\0')
	{
		s++;
		leng++;
	}
	return (leng);
}

/**
 * add_node - add new node
 * @head: head node to be added
 * @str: new name
 * Return: pointer of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (!newhead)
		return (NULL);
	newhead->str = strdup(str);
	newhead->len = _strlen(str);
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
