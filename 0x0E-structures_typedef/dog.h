#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog information
 * @name: First member, dog's name
 * @age: Second member, dog's age
 * @owner: Third member, dog's owner
 *
 * Description: Dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
