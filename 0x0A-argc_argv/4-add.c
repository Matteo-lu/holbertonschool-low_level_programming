#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - multiplies two numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always return 0
 *
 */

int main(int argc, char *argv[])
{
	int i, a;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (a = 1; argv[i][a]; a++)
		{
		if (!isdigit(argv[i][a]))
		{
			printf("Error\n");
			return (1);
		}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
