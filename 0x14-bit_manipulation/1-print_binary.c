#include "holberton.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: The number
 *
 * Return: binary string
 */
void print_binary(unsigned long int n)
{
	int y, z, i, j, x;

	z = n;
	y = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
	for (j = 0; z >= 1; j++)
	{
		z = z >> y;
	}
	j = j - 1;
	for (i = j; i >= 0; i--)
	{
		x = n >> i;
		_putchar('0' + (x & 1));
	}
	}
}
