#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: string
 * @f: Pointer function
 * Return: name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	if (name == NULL)
	{
		return;
	}
	f(name);
}
