#include "holberton.h"

/**
 * _puts - Checks for a digit
 *
 * @str: Variable pointer string
 *
 * Return: Always return 0
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
