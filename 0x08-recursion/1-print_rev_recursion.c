#include <stdio.h>
#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: Pointer variable to the main string
 *
 * Return: Always return 0
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
