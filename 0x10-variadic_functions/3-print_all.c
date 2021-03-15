#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: Idetificator of parameters
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	struct_fun patron[] = {
		{"c", character},
		{"i", integer},
		{"f", flotante},
		{"s", string},
		{NULL, NULL}
	};


	char *p = "";
	char *q = ", ";
	int i;
	int j;

	va_list parameters;

	va_start(parameters, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (patron[j].s != NULL)
		{
			if (format[i] == patron[j].s[0])
			{
				printf("%s", p);
				patron[j].f(parameters);
				p = q;
			}
			j++;
		}
		i++;
	}
	va_end(parameters);
	printf("\n");
}

/**
 * character - prints char
 * @parameters: Idetificator of parameters
 *
 * Return: nothing
 */
void character(va_list parameters)
{
	int z;

	z = va_arg(parameters, int);
	printf("%c", z);
}

/**
 * integer - prints integer
 * @parameters: Idetificator of parameters
 *
 * Return: nothing
 */
void integer(va_list parameters)
{
	int z;

	z = va_arg(parameters, int);
	printf("%d", z);
}

/**
 * flotante - prints anything
 * @parameters: Idetificator of parameters
 *
 * Return: nothing
 */
void flotante(va_list parameters)
{
	double z;

	z = va_arg(parameters, double);
	printf("%f", z);
}

/**
 * string - prints anything
 * @parameters: Idetificator of parameters
 *
 * Return: nothing
 */
void string(va_list parameters)
{
	char *z;

	z = va_arg(parameters, char*);
	if (z == NULL)
	{
		z = "(nil)";
	}
	printf("%s", z);
}
