#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * Return: 0 before prints the sentence
 */

int main(void)
{
	int dec;
	int und;
	
	for (dec = '0'; dec <= '9'; dec++)
	{
		for (und = '0'; und <= '9'; und++)
		{
			putchar(dec);
			putchar(und);
			if (und == '9' && dec == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
