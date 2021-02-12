#include "holberton.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 *
 *
 * Return: num variable
 *
 */

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar (num / 10 + '0');
			}
			_putchar (num % 10 + '0');
		}
	_putchar('\n');
	}
}
