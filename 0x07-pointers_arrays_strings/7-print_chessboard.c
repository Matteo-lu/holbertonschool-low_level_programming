#include <stdio.h>
#include "holberton.h"

/**
 * print_chessboard - Searches a string for any of a set of bytes
 *
 * @a: Pointer to array
 *
 * Return: Always return 0
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);

			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
