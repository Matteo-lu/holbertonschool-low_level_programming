#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - New structure dog 
 * @name: Pointer to name
 * @age: Varible to age
 * @owner: Pointer to owner
 * Return: Dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
