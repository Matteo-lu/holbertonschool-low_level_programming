#include <stdio.h>
#include "holberton.h"

/**
 * main - prints a string, followed by a new line
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always return 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
