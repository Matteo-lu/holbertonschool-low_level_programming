#include "holberton.h"

/**
 * main - Prints some sentence
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 before prints the sentence
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *buf1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(argv[1], O_RDWR);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't read
from file NAME_OF_THE_FILE");
		exit(98);
	}
	printf("%d\n", fd1);
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	printf("%d\n", fd2);
	buf1 = malloc(1024 * sizeof(char));
	read(fd1, buf1, 1024);
	buf1[1024] = '\0';
	write(fd2, buf1, 1024);
	close(fd1);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	close(fd2);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}
