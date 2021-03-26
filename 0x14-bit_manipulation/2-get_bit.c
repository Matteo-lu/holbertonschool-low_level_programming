#include "holberton.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: The number given
 * @index: the index, starting from 0 of the bit to get
 * Return: binary number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
	{
		return (-1);
	}
	x = x << index;

	if ((x & n) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
