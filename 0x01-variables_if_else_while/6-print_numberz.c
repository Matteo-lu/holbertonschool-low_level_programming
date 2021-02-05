#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
