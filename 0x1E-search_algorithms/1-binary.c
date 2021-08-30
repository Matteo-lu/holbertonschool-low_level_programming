#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Return found value,
 * if value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int first_idx, last_idx, middle_idx, i;

	first_idx = 0;
	last_idx = size - 1;
	middle_idx = size;
	if (array == NULL)
		return (-1);

	while (first_idx <= last_idx)
	{
		printf("Searching in array: ");
		for (i = first_idx; i < last_idx; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		middle_idx = first_idx + (last_idx - first_idx) / 2;

		if (array[middle_idx] == value)
		{
			return (middle_idx);
		}
		if (array[middle_idx] < value)
		{
			first_idx = middle_idx + 1;
		}
		else
		{
			last_idx = middle_idx - 1;
		}
	}
	return (-1);
}
