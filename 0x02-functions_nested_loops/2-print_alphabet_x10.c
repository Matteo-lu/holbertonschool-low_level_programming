#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 *
 * Return: 0 before prints the sentence
 *
 */

void print_alphabet_x10(void)
{
	char alph;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
