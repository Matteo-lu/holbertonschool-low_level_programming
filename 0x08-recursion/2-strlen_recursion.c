#include <stdio.h>
#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: Pointer variable to the main string
 *
 * Return: Always return 0
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
