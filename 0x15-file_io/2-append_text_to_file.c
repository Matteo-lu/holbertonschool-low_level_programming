#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to create
 * @text_content: NULL terminated string to write to the file
 * Return: On success 1.
 * On error, -1 is returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, size;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	size = write(fd, text_content, i);
	if (size < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
