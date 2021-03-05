#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - Creates an array of integers
 * @min: Variable size
 *
 * @max: Pointer to char 2
 * Return: Always return 0
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int j;
	int k;

	if (min > max)
	{
		return (NULL);
	}
	i = (max - min + 1);
	array = malloc(i * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	j = (max - min);
	for (k = 0; k <= j; k++)
	{
		array[k] = min;
		min++;
	}
	return (array);
}
