#include "holberton.h"

/**
 * flip_bits - returns the number of bits
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, c;
	unsigned int j = 0;
	int i;

	c = n ^ m;

	for (i = 0; i < 63; i++)
	{
		x = 1;
		x = x << i;

		if ((c & x) != 0)
		{
			j++;
		}
	}
	return (j);
}
