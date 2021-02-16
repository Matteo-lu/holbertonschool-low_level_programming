#include "holberton.h"

/**
 * swap_int - Checks for a digit
 *
 * @a: Variable a
 * @b: Variable b
 * Return: 1 if c is a digit or 0 otherwise
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
