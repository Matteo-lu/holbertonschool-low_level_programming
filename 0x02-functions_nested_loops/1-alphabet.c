#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: 0 before prints the sentence
 *
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
