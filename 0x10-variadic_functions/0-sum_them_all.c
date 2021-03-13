#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters of unsigned integer type
 *
 * Return: Integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parametros;

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(parametros, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(parametros, int);
	}
	va_end(parametros);
	return (sum);
}
