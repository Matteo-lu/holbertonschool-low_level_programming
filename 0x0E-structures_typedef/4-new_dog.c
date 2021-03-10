#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - New structure dog
 * @name: Pointer to name
 * @age: Varible to age
 * @owner: Pointer to owner
 * Return: Dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, m;

	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
	}

	my_dog->name = malloc((i + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		my_dog->name[j] = name[j];
	}
	my_dog->age = age;
	for (k = 0; owner[k] != '\0'; k++)
	{
	}

	my_dog->owner = malloc((k + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	for (m = 0; m <= k; m++)
	{
		my_dog->owner[m] = owner[m];
	}
	return (my_dog);
}
