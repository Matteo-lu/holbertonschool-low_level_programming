#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	char alph;
	char Alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

	for (Alph = 'A'; Alph <= 'Z'; Alph++)
	{
		putchar(Alph);
	}
	putchar('\n');
	return (0);
}
