#include "holberton.h"

/**
 * _isalpha - Prints the alphabet
 *
 * @c: variable
 *
 * Return: 0 before prints c
 *
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
	return (c);
}
