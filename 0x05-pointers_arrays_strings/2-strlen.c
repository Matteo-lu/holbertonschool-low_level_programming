#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Checks for a digit
 *
 * @s: Variable s
 *
 * Return: Always return 0
 *
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;


	return (count);
}
