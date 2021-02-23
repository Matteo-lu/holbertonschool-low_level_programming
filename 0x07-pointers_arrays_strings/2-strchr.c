#include <stdio.h>
#include "holberton.h"

/**
 * *_strchr - fills memory with a constant byte
 *
 * @s: Pointer variable
 *
 * @c: character
 * Return: Always return 0
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	return ('\0');
}
