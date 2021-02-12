#include "holberton.h"

/**
 * print_line - Prints numbers from 0 to 14, 10 times
 * @n: input variable
 *
 * Return: num variable
 *
 */

void print_line(int n)
{
	int b;

	b = 0;

	while (b < n)
	{
		_putchar('_');
		b++;
	}
	_putchar('\n');
}
