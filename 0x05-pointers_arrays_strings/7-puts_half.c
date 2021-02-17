#include "holberton.h"

/**
 * puts_half - Checks for a digit
 *
 * @str: Variable pointer string
 *
 * Return: Always return 0
 *
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 != 0)
		count--;

	for (i = count / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
