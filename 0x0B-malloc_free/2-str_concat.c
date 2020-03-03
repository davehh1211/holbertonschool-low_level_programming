#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - creates an array of chars, initializes with a specific char.
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer of char
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, j, sum, t, m;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lens1++;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		lens2++;
	sum = lens1 + lens2 + 1;

	ar = malloc(sum * sizeof(char));

	if (ar == NULL)
		return (NULL);
	for (t = 0; t < lens1; t++)
		ar[t] = s1[t];
	for (m = 0; m <= lens2; m++)
		ar[t + m] = s2[m];
	ar[t + m] = '\0';
	return (ar);
}
