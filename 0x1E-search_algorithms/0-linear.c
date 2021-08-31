#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Return found value,
 * if value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i, j;
	char *str_value = "Value checked array";

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		for (j = 0; str_value[j] != '\0'; j++)
		{
			putchar(str_value[j]);
		}
		print_values(i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * print_values - function to print integers with putchar
 * @i: index where from array of integers
 * @value: value
 * Return: nothing
 */
void print_values(unsigned int i, int value)
{
	putchar('[');
	int_put(i);
	putchar(']');
	putchar(' ');
	putchar('=');
	putchar(' ');
	putchar('[');
	int_put(value);
	putchar(']');
	putchar('\n');
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
