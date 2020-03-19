#include "lists.h"
/**
* print_lists - print the number of ocurrences in printing
* @h: list to print
* Return: print number of iterations
*/
size_t print_list(const list_t *h)
{
    int n = 0, i = 0;

    for (i = 0; h != NULL; i++)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        n++;
    }
    return (n);
}
