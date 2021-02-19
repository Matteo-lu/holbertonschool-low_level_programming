#include "holberton.h"
#include <stdio.h>

/**
 * *leet - Concatenates two strings
 *
 * @a: Variable pointer to string
 *
 *
 * Return: Always return 0
 *
 */

char *leet(char *a)
{
	int i;
	int j;
	char *aux;

	aux = "aAeEoOtTlL4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == aux[j])
			{
				a[i] = aux[j + 10];
			}
		}
	}
	return (a);
}
