#include "holberton.h"

/**
 * _islower - Prints the alphabet
 *
 * @c: variable
 *
 * Return: 0 before prints c
 *
 */

int _islower(int c)
{

	if (c > 96 && c < 123)
		_putchar(49);
	
	else
		_putchar(48);
	
	return(c);
}
