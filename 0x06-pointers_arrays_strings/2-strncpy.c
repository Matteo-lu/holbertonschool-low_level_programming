#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - Concatenates two strings
 *
 * @dest: Variable pointer to array
 * @src: Variable pointer to array
 * @n: Variable integer
 * Return: Always return 0
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
