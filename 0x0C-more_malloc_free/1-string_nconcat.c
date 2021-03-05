#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *string_nconcat - Concatenates two strings
 * @n: Variable size
 * @s1: Pointer to char 1
 * @s2: Pointer to char 2
 * Return: Always return 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	int i;
	int j;
	unsigned int k;
	int l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
	}
	memory = malloc((i + n + 1) * sizeof(char));
	if (memory == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		memory[j] = s1[j];
	}
	for (k = 0; k < ((i + n) - l); ++k)
	{
		memory[j] = s2[k];
		j++;
	}
	memory[j] = '\0';
	return (memory);
}
