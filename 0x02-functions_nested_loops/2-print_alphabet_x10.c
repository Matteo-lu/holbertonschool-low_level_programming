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
	int times;

	times = 0;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		while (times < 11)
		{
			_putchar(alph);
		}
	}
	_putchar('\n');
}
