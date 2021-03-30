#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, sz;
	char *c;

	c = malloc(letters * sizeof(char));
	if (c == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	size = read(fd, c, letters);
	c[size] = '\0';

	sz = write(STDOUT_FILENO, c, size);
	if (sz < 0)
	{
		return (0);
	}
	close(fd);
	return (size);
}
