#include "holberton.h"

/**
 * print_triangle - Prints triangle
 *
 * @size: input variable
 *
 * Return: num variable
 *
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	c = size;
	e = 1;

	if (size > 0)
	{

	for (a = 0; a < size; a++)
	{
		for (b = c -1; b > 0 ; b--)
		{
			_putchar(' ');
		}
		for (d = 0; d < e; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
		c--;
		e++;
	}
	}
	else
		_putchar('\n');
}
