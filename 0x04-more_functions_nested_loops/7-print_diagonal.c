#include "holberton.h"

/**
 * print_diagonal - Prints numbers from 0 to 14, 10 times
 * @x: variable 1
 * @y: variable 2
 * @n: variable 3
 * Return: num variable
 *
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x <= n - 1; x++)
		{

			for (y = 0; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
