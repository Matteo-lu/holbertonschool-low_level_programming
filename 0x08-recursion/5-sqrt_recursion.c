#include <stdio.h>
#include "holberton.h"

int aux(int a, int n);

/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 *
 * @n: base
 *
 * Return: Always return 0
 *
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	return (aux(a, n));
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

	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}

	return (aux(a + 1, n));
}
