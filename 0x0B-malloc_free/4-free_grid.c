#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid -  frees a 2 dimensional grid
 *
 * @grid: Foble pointer
 * @height: Integer variable
 * Return: Always return 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
