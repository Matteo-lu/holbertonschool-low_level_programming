#include "holberton.h"

/**
 * print_last_digit - Prints the alphabet
 *
 * @a: variable
 *
 * Return: 0 before prints a
 *
 */

int print_last_digit(int a)
{
	int l;

	l = a % 10;

	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l % 10);
}
