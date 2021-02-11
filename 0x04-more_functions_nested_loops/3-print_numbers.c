#include "holberton.h"

/**
 * print_numbers - multiples two integers
 *
 *
 * Return: num variable
 *
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');

}
