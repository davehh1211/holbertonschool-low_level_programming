#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name (pointer)
 * @f: it is the function pointer
 * @name: name to be printed
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	char *p;

	p = name;
	if (p == NULL)
	{
		f(NULL);
	}
	f(p);
}
