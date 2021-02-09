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

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return (c);
}
