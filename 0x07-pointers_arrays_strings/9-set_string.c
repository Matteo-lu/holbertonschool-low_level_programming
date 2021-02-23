#include <stdio.h>
#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: Pointer variable to a pointer
 *
 * @to: Pointer variable
 * Return: Always return 0
 *
 */

void set_string(char **s, char *to)
{
	*s = &*to;
}
