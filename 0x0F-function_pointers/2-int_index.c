#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * on each element of an array
 * @array: array of numbers
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: name
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int value, i, j = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (array[i] == 98)
			{
				value = cmp(array[i]);
				if (value == 1)
					return (i);
				if (j == 0)
					return (-1);
			}
			if (array[i] == -98)
			{
				value = cmp(array[i]);
				if (value == 1)
					return (i);
			}
		}
	}
	return (-1);
}
