#include "variadic_functions.h"
/**
 * print_all - function to print strings
 * @format: string to print
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list cp;
	int h = 0;
	char *s;

	va_start(cp, format);
	while (format == NULL)
	{	printf("\n");
		return;
	}
	while (format[h])
	{
		switch (format[h])
		{
			case 'c':
				printf("%c", (char)va_arg(cp, int));
				break;
			case 'i':
				printf("%d", va_arg(cp, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(cp, double));
				break;
			case 's':
				s = va_arg(cp, char*);
				if (s == NULL)
				{	printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[h] == 'c' || format[h] == 'i' || format[h] == 'f' ||
		    format[h] == 's') && (format[h + 1] != '\0'))
			{	printf(", ");
			}
		h++;
	}
	printf("\n");
	va_end(cp);
}
