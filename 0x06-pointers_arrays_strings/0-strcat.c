#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - Concatenates two strings
 *
 * @dest: Variable pointer to array
 * @src: Variable pointer to array
 * Return: Always return 0
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = 0;
	return (dest);
}
