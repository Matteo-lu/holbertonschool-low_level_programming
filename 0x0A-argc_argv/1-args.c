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

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
