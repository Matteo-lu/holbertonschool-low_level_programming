#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: NULL terminated string to write to the file
 * Return: On success 1.
 * On error, -1 is returned
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, size;

	if (text_content == NULL)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	size = write(fd, text_content, i);
	if (size < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
