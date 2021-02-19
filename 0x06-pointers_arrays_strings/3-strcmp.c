#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Concatenates two strings
 *
 * @s1: Variable pointer to array
 * @s2: Variable pointer to array
 *
 * Return: Always return 0
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i < s1[i] && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
