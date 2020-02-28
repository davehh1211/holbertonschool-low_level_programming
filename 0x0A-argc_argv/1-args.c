#include <stdio.h>
#include <stdlib.h>

/**
 * main - fucntion to change name of programs
 * @argc: the times of the argument lines
 * @argv: the string of the command line
 * Return: integer
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
