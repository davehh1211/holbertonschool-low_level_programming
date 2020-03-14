#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers of a variadic function
 * @separator: symbol to ignore
 * @n: constant
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i, m;

	va_start(numbs, n);

	for (i = 0; i < n; i++)
	{
		m = va_arg(numbs, int);
		printf("%d", m);

		if (i != n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbs);
}
