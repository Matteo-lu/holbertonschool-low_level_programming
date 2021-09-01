#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Return found value,
 * if value is not present in array or if array is NULL, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = 0, prev = 0;
	char *prhase1 = "Value checked array";
	char *prhase2 = "Value found between indexes ";

	if (array == NULL)
		return (-1);

	print_prhase(jump_step, array[jump_step], prhase1);
	jump_step = 3;

	while (array[prev] < value)
	{
		if (array[jump_step] >= value || jump_step >= size)
			break;

		else
		{
			prev = jump_step;
			jump_step = jump_step + 3;
		}
		print_prhase(prev, array[prev], prhase1);
	}

	print_prhase(prev, jump_step, prhase2);

	while (array[prev] < value)
	{

		print_prhase(prev, array[prev], prhase1);
		prev++;
		if (prev >= size)
			return (-1);
	}

	print_prhase(prev, array[prev], prhase1);
	if (array[prev] == value)
		return (prev);
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

/**
 * print_prhase - function to print integers with putchar
 * @i: index where from array of integers
 * @value: value
 * @prhase: prhase to be printed
 * Return: nothing
 */
void print_prhase(unsigned int i, int value, char *prhase)
{
	unsigned int j;

	for (j = 0; prhase[j] != '\0'; j++)
	{
		putchar(prhase[j]);
	}

	putchar('[');
	int_put(i);
	putchar(']');
	putchar(' ');
	if (prhase[6] == 'c')
		putchar('=');
	else
	{
		putchar('a');
		putchar('n');
		putchar('d');
	}
	putchar(' ');
	putchar('[');
	int_put(value);
	putchar(']');
	putchar('\n');
}
