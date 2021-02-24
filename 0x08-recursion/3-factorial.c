#include <stdio.h>
#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: Pointer variable to integer
 *
 * Return: Always return 0
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
