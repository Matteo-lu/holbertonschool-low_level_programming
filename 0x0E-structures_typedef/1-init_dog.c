#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Dog information
 * @name: First member, dog's name
 * @age: Second member, dog's age
 * @owner: Third member, dog's owner
 * @d: Pointer to structure
 *
 * Return: Dog information
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
