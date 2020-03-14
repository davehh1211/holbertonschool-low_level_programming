#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings of a variadic function
 * @separator: spaces to print
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list cop;
	unsigned int i;
	char *s;

	if (n == 0)
		return;
	va_start(cop, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(cop, char*);
		printf("%s", s);
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(cop);
}
