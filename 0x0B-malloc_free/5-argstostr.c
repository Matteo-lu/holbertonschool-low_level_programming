#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *argstostr -  concatenates all the arguments of your program
 *
 * @ac: vector value
 * @av: vector string
 * Return: NULL if ac or av are iquals to 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, count_char = 0;
	char *conc = NULL;

	if (av == 0 || ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count_char++;
		}
		count_char++;
	}
	conc = malloc((count_char + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	count_char = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conc[count_char] = av[i][j];
			count_char++;
		}
		conc[count_char] = '\n';
		count_char++;
	}
	conc[count_char] = '\0';
	return (conc);
}
