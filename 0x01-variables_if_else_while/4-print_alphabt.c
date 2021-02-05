#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (!(alph == 'e' || alph == 'q'))
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
