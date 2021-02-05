#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	char Alph;

	for (Alph = 'a'; Alph <= 'z'; Alph++)
	{
		putchar(Alph);
	}
	putchar('\n');
	return (0);
}
