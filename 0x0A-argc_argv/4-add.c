#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fucntion to change name of programs
 * @argc: the times of the argument lines
 * @argv: the string of the command line
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i = 0, sum;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]) > 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
