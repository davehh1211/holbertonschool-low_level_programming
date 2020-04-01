#include "holberton.h"
void _closure(int doc);
/**
 * main - function to copy
 * @ac: number of arguments
 * @av: array of arguments
 * Return: an integer
 */
int main(int ac, char *av[])
{
	int from, to, readfile, writtenfile;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	readfile = 1024;
	do {
		readfile = read(from, buf, 1024);
		if (readfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		writtenfile = write(to, buf, readfile);
		if (writtenfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (readfile == 1024);
	_closure(from);
	_closure(to);
	return (0);
}

/**
 * _closure - function to close
 * @doc: file to close
 * Return: nothing
 */
void _closure(int doc)
{
	int failure;

	failure = close(doc);
	if (failure == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", doc);
		exit(100);
	}
}
