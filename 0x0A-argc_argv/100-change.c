#include <stdio.h>
#include <stdlib.h>
int change(int value);

/**
 * main - fucntion to change name of programs
 * @argc: the times of the argument lines
 * @argv: the string of the command line
 * Return: integer
 */

int main(int argc, char *argv[])
{
	if (argc <= 1 && argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1])
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", change(atoi(argv[1])));
	}
	return (0);
}


/**
 * change - check the amounts of change back
 * @value: the money to be changed
 * Return: amount of coins to return
 */

int change(int value)
{
	int currency[5] = {25, 10, 5, 2, 1};
	int i = 0, coins = 0;

	while (value > 0)
	{
		if (currency[i] <= value)
		{
			value -= currency[i];
			coins++;
		}
		else
		{
			i++;
		}
	}
	return (coins);
}
