#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the addition of integers in a variadic function
 * @n: integer to be added list.
 * Return: a result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i, sum = 0;

	va_start(numbs, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbs, unsigned int);

	va_end(numbs);
	return (sum);
}
