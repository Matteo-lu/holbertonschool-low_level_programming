#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - Allocates memory for an array, using malloc
 * @nmemb: Variable size
 *
 * @size: Pointer to char 2
 * Return: Always return 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory = 0;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		memory[i] = 0;
	}
	return (memory);
}
