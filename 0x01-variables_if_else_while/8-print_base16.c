#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
