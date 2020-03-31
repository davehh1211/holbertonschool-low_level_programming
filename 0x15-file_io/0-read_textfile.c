#include "holberton.h"
/**
 * read_textfile - open, read and write a file
 * @filename: file to be open
 * @letters: number or letters.
 * Return: the number of prints done
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, file_read, file_written;
	char *buf;

	if (filename == NULL) /*checking if null*/
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* open */
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	/* read */
	file_read = read(file, buf, letters);
	if (file_read == -1)
	{
		return (0);
	}
	/* write */
	file_written = write(STDOUT_FILENO, buf, file_read);
	if (file_written == -1)
	{
		return (0);
	}

	close(file);

	return (file_read);
}
