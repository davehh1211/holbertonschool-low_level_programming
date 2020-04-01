#include "holberton.h"
/**
 * create_file - create a file using file dis.
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 in succes
 */
int create_file(const char *filename, char *text_content)
{
	int file, written;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	return (1);

	if (text_content == NULL)
	{
		written = write(file, text_content, 0);
	}
	else
	{
		written = write(file, text_content, strlen(text_content));
	}
	if (written == -1)
		return (-1);
	close(file);
	return (1);
}
