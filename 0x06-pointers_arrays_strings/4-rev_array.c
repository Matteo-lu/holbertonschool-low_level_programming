#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Concatenates two strings
 *
 * @a: Variable pointer to array
 *
 * @n: Variable integer
 * Return: Always return 0
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux[1000];


	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
