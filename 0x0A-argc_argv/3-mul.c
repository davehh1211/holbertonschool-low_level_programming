#include <stdio.h>
#include <stdlib.h>

/**
 * main - fucntion to change name of programs
 * @argc: the times of the argument lines
 * @argv: the string of the command line
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
