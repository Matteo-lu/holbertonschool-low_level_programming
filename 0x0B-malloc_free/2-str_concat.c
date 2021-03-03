#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *str_concat - Concatenates two strings
 *
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 * Return: Always return 0
 */
char *str_concat(char *s1, char *s2)
{
	char *aux;
	int i;
	int j;
	int k;
	int l;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	aux = malloc((i + j + 1) * sizeof(char));

	if (aux == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		aux[k] = s1[k];
	}
	for (l = 0; l <= j; l++)
	{
		aux[k] = s2[l];
		k++;
	}
	return (aux);
}
