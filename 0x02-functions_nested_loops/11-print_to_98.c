#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the alphabet
 * @n: variable 1
 *
 * Return: 0 before prints a
 *
 */

void print_to_98(int n)
{

	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
