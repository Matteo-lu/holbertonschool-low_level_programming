#include "holberton.h"

/**
 * print_rev - Checks for a digit
 *
 * @s: Variable pointer string
 *
 * Return: Always return 0
 *
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = count; i >= 0; i--)
	{
		if (s[i] != '\0')
		_putchar(s[i]);
	}
	_putchar('\n');
}
