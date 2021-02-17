#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Checks for a digit
 *
 * @a: Variable pointer to array
 * @n: Variable integer
 * Return: Always return 0
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
			printf(", ");
	}
	printf("\n");
}
