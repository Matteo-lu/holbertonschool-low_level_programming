#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Checks for a digit
 *
 * @s: Variable s
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
