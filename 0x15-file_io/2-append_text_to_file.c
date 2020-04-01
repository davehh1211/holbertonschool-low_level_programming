#include "holberton.h"
/**
 * append_text_to_file - create a file using file dis.
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 in succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (file != -1)
		{
			return (1);
		}
		else
		{
			return (-1);/* code */
		}
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
