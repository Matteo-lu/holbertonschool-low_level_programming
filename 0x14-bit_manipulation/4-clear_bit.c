#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Pointer to number given
 * @index: the index, starting from 0 of the bit to get
 * Return: 1 if succes or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (*n < index)
	{
		return (-1);
	}
	if (index > 63)
	{
		return (-1);
	}
	else
	{
	x = x << index;

	*n = x ^ *n;
	}
	return (1);
}
