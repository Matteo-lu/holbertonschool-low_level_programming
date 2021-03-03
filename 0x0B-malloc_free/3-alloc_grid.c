#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * **alloc_grid -  Returns a pointer to a 2 dimensional array of integers
 *
 * @width: Pointer to string 1
 * @height: Pointer to string 2
 * Return: Always return 0
 */
int **alloc_grid(int width, int height)
{
	int **aux;
	int i;
	int j;
	int k;
	int l;

	aux = malloc(height * sizeof(int *));

	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		aux[i] = malloc(width * sizeof(int));
		if (aux[i] == NULL)
		{
			for (l = i; l >= 0; l--)
			{
				free(aux[i]);
				free(aux);
				return (NULL);
			}
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			aux[j][k] = 0;
		}
	}
	return (aux);
}
