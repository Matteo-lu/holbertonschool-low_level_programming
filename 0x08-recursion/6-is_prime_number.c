#include <stdio.h>
#include "holberton.h"

int aux(int a, int n);

/**
 * is_prime_number - returns the value of x raised to the power of y
 *
 * @n: base
 *
 * Return: Always return 0
 *
 */

int is_prime_number(int n)
{
	return (aux(n, n / 2));
}

/**
 * aux - returns the value of x raised to the power of y
 *
 * @a: Varibale to operate
 * @n: Variable entry
 * Return: Always return 0
 *
 */

int aux(int a, int n)
{
	if (a < 2)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (a % n == 0)
	{
		return (0);
	}
	return (aux(a, n - 1));
}
