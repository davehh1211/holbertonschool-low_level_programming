#include "holberton.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: The character to print
 *
 * Return - value of repetitions
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
