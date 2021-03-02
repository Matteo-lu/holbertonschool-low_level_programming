#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *create_array - Create an array of char.
 *
 * @size: base
 * @c: exp
 * Return: Always return 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc((size) * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	ar[i - 1] = '\0';
	return (ar);
}
