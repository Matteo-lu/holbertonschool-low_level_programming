#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings -   prints strings, followed by a new line
 * @n: number of parameters of unsigned integer type
 * @separator: Pointer mandatory parameter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters;

	unsigned int i;
	char *car;

	va_start(parameters, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			car = va_arg(parameters, char*);
			if (car == NULL)
				printf("(nil)");
			else
				printf("%s", car);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			car = va_arg(parameters, char*);

			if (car == NULL && (i < n - 1))
				printf("(nill)%s", separator);
			else if (i < (n - 1))
				printf("%s%s", car, separator);
			else if (car == NULL && (i == n - 1))
				printf("(nill)");
			else
				printf("%s", car);
		}
	}
	va_end(parameters);
	printf("\n");
}
