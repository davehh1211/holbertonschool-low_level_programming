#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: string to concatenate
 * @s2: second string to concatenate
 * @n: number of length
 * Return: a string of characters
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, t, p, sum = 0, k, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++) /*to get the lenght s1*/
		lens1++;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++) /*to get the lenght s2*/
		lens2++;
	sum = lens1 + n + 1; /*the lenght of the whole pointer of char*/

	ar =  malloc(sizeof(char) * sum); /*allocate memory or pointer*/

	if (ar == NULL)
		return (NULL);

	for (t = 0; t < lens1; t++) /*to write the s1 on the ar memory*/
		ar[t] = s1[t];

	for (k = 0; k < n && s1[k] != '\0'; k++)
		ar[t + k] = s2[k];
	if (n >= lens2)
		for (p = 0; p <= lens2; p++)
			ar[t + p] = s2[p];
	return (ar);
}
