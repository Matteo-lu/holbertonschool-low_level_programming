#include "holberton.h"

/**
 * binary_to_uint - writes the character c to stdout
 * @b: The character to print
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int z, p;

	p = 0;
	z = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
	}
	i = i - 1;
	for (j = 0; b[j] != '\0'; j++)
	{
		if ((b[j] != '1') && (b[j] != '0'))
		{
			return (0);
		}
		if (b[j] == '1')
		{
			z = 1 << i;
			p = p + z;
		}
		i--;
	}
	return (p);
}
