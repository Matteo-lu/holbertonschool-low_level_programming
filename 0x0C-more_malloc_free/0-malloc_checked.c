#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *malloc_checked - Allocates memory using malloc
 *
 * @b: Variable data
 *
 * Return: Always return 0
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
