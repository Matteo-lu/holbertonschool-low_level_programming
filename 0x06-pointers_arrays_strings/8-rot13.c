#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *rot13 - Concatenates two strings
 * @str: Variable pointer to string
 * Return: Always return 0
 *
 */

char *rot13(char *str)
{
	char array1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char array2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; array1[j] != '\0'; j++)
		{
			if (str[i] == array1[j])
			{
				str[i] = array2[j];
				break;
			}
		}
	}
	return (str);
}
