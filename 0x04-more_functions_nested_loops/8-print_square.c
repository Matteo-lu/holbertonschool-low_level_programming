#include "holberton.h"

/**
 * print_square - Prints numbers from 0 to 14, 10 times
 *
 * @n: input variable
 *
 * Return: num variable
 *
 */

void print_square(int size)
{
	int x;
	int y;

	if (size != 0)
		for (x = 0; x < size; x++)
		{
			
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
