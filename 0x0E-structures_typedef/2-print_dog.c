#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Dog information
 * @d: Pointer to structure
 *
 * Return: Dog information
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
	}
}