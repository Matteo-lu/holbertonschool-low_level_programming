#include "holberton.h"

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 *
 * @c: character variable
 *
 * _putchar - Print some character
 */
int _putchar(char c);

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
