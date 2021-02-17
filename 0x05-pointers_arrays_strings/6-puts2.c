#include "holberton.h"

/**
 * puts2 - Checks for a digit
 *
 * @str: Variable pointer string
 *
 * Return: Always return 0
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
