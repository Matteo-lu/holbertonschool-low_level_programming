#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: array to be capitalize
 * Return: Always return 0
 *
 */
char *cap_string(char *str)
{
	unsigned int i, j;
	char separators[] = {',', ';', '.', '!', '?', '(', ')',
		'{', '}', '\n', '\t', ' '};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122 && str[i] == separators[j])
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
