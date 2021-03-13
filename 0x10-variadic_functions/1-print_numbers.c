#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @n: number of parameters of unsigned integer type
 * @separator: Pointer mandatory parameter
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameters;

	unsigned int i;
	int num;

	va_start(parameters, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(parameters, int);
			printf("%d", num);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(parameters, int);
			if (i < (n - 1))
			{
				printf("%d%s", num, separator);
			}
			else
			{
				printf("%d", num);
			}
		}
	}
	va_end(parameters);
	printf("\n");
}
