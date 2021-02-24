#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Searches a string for any of a set of bytes
 *
 * @a: Pointer variable
 *
 * @size: Size variable
 * Return: Always return 0
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int n = 0;
	int m = 0;
	int p;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		n += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		m += *(a + p);
	}
	printf("%d, %d\n", n, m);
}
