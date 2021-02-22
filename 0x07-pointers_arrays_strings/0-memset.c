#include <stdio.h>
#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: Pointer variable
 * @b: Variable pointer to string
 * @n: Variable pointer to string
 * Return: Always return 0
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (0);
}
