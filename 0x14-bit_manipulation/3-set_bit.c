#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Pointer to number given
 * @index: the index, starting from 0 of the bit to get
 * Return: binary number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
	x = x << index;

	*n = x | *n;
	}
	return (1);
}
