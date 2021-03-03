#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 *
 * @str: Pointer to string
 *
 * Return: Always return 0
 */
char *_strdup(char *str)
{
	char *aux;
	int i;
	int j;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	aux = malloc((i + 1) * sizeof(char));

	if (aux == NULL)
		return (NULL);

	while (j <= len)
	{
		aux[j] = str[j];
		j++;
	}
	
	return (aux);
}
