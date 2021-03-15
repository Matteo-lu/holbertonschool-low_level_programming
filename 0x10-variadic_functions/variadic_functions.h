#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list - Short description
 * @s: First member
 * @f: Second member
 *
 * Description: Longer description
 */

typedef struct list
{
	char *s;
	void (*f)();
}struct_fun;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void character(va_list parameters);
void integer(va_list parameters);
void flotante(va_list parameters);
void string(va_list parameters);

#endif
