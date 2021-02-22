#include <stdio.h>
#include "holberton.h"

/**
 * *_memcpy - fills memory with a constant byte
 *
 * @dest: Pointer variable des
 * @src: Pointer variable source
 * @n: n bytes
 * Return: Always return 0
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
