#include <stdio.h>
#include "holberton.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 *
 * @s: Pointer variable
 *
 * @accept: Pointer variable
 * Return: Always return 0
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
