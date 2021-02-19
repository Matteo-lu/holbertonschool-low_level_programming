#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - Concatenates two strings
 *
 * @a: Variable pointer to string
 *
 *
 * Return: Always return 0
 *
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
