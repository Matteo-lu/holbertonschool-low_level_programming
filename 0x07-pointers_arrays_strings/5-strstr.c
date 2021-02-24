#include <stdio.h>
#include "holberton.h"

/**
 * *_strstr - Searches a string for any of a set of bytes
 *
 * @haystack: Pointer variable
 *
 * @needle: Pointer variable
 * Return: Always return 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int n = 0;
	int p;

	for (p = 0; needle[p] != '\0'; p++)

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == ' ')
			{
				n = 0;
			}
			if (needle[j] == haystack[i])
			{
				n++;
			}
			if (n == p)
			{
				return (&(haystack[i - j]));
			}
		}
	}
	if (needle[0] == '\0')
	{
		return (&(haystack[0]));
	}
	else
	{
	return ('\0');
	}
}
