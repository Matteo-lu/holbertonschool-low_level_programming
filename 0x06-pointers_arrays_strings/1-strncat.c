#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - Concatenates two strings
 *
 * @dest: Variable pointer to array
 * @src: Variable pointer to array
 * @n: Variable integer
 * Return: Always return 0
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		if (j < n)
		{
		dest[i] = src[j];
		}
	}

	dest[i] = 0;
	return (dest);
}
