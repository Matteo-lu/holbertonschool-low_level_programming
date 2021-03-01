#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
	int i;
	int mul = 0;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
	for (i = 0; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	}
	return (0);
}
