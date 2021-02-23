#include <stdio.h>
#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string that needs to be scanned
 *
 * @accept: string which character needs to be matched in s
 * Return: Always return 0
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (s[i] == accept[j])
			{
				num = num + 1;
				break;
			}
		}
	}
	return (num);
}
