#include <stdio.h>
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
	char *str_value = "Searching in array: ";

	first_idx = 0;
	last_idx = size - 1;
	middle_idx = size;
	if (array == NULL)
		return (-1);

	while (first_idx <= last_idx)
	{
		for (i = 0; str_value[i] != '\0'; i++)
			putchar(str_value[i]);

		for (i = first_idx; i < last_idx; i++)
			int_put(array[i]);
			putchar(',');
			putchar(' ');

		int_put(array[i]);
		putchar('\n');

		middle_idx = first_idx + (last_idx - first_idx) / 2;

		if (array[middle_idx] == value)
			return (middle_idx);

		if (array[middle_idx] < value)
			first_idx = middle_idx + 1;

		else
			last_idx = middle_idx - 1;
	}
	return (-1);
}

/**
 * int_put - function to print integers with putchar
 * @n: integer to be printed
 *
 * Return: nothing
 */
void int_put(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		int_put(n / 10);

	putchar(n % 10 + '0');
}
