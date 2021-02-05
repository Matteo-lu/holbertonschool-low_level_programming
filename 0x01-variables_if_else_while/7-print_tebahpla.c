#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	char num;

	for (num = 'z'; num >= 'a' ; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
