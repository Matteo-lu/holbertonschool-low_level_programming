#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - Concatenates two strings
 *
 * @a: Variable pointer to string
 *
 *
 * Return: Always return 0
 *
 */

char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 'a' && a[i] <= 'm') || (a[i] >= 'A' && a[i] <= 'M'))
		{
			a[i] = a[i] + 13;
		}
		else if ((a[i] >= 'n' && a[i] <= 'z') || (a[i] >= 'N' && a[i] <= 'Z'))
		{
			a[i] = a[i] - 13;
		}
	}
	return (a);
}
