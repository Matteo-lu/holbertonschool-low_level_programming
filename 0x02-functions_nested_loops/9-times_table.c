#include "holberton.h"

/**
 * times_table - Prints the alphabet
 *
 *
 * Return: 0 before prints a
 *
 */

void times_table(void)
{
	
	int f, c, a;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			a = f * c;
			if (c == 0)
			{
				_putchar('0');
			}
			else if (a <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar(10);
	}
}

	
        
