#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Checks for a digit
 *
 * @s: Variable pointer string
 *
 * Return: Always return 0
 *
 */

void rev_string(char *s)
{
	int i;
	int j;
	int aux;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	i--;
	for (j = 0; j < i ; j++)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
		i--;
	}
}
